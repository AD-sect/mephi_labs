#include "RGB.h"

class Image {
public:

    Image(int size, RGB data);

    int getSize() const;

    void setSize(int size);

    void setData(int *R, int *G, int *B);

    const RGB &getData() const;

private:
    int size;
    RGB data;
};



