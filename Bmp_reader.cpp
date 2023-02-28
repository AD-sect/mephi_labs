#include <iostream>
#include <iterator>
#include "cmake-build-debug/Image.h"

class BmpReader {

public:
    static Image read(const char *filename) {
        FILE *f = fopen(filename, "rb");
        unsigned char info[54];
        fread(info, sizeof(unsigned char), 54, f);

        int width;
        int height;
        memcpy(&width, info + 18, sizeof(int));
        memcpy(&height, info + 22, sizeof(int));

        int heightSign = 1;
        if (height < 0) {
            heightSign = -1;
        }

        int size = 3 * width * abs(height);
        unsigned char *data = new unsigned char[size];
        fread(data, sizeof(unsigned char), size, f);
        fclose(f);
        unsigned char tmp;
        int* R = new int[size];
        int* G = new int[size];
        int* B = new int[size];

        if (heightSign == 1) {
            for (int i = 0; i < size; i += 3) {
                tmp = data[i];
                data[i] = data[i + 2];
                data[i + 2] = tmp;

                R[i] = (int) data[i];
                G[i] = (int) data[i + 1];
                B[i] = (int) data[i + 2];

                std::cout << "R: " << R[i]  << " G: " << G[i] << " B: " << B[i] << std::endl;
            }
        }
        RGB rgb = RGB(size);
        rgb.setR(R);
        rgb.setG(G);
        rgb.setB(B);

        Image image = Image(size, rgb);
        return image;
    }
};
