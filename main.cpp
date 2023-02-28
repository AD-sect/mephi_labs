#include <iostream>
#include "Bmp_reader.cpp"
#include <pthread.h>

#define MAX_THREADS 9

static int sum;

void* answerFunction(int size, int* R, int* G, int* B) {
    int ans;

    for (int i = 1; i < size; i++) {
        if ((R[i] * G[i] * B[i]) < 1000) {
            ans++;
        }
    }
    std::cout << ans << std::endl;
    return ans;
}

int main() {
    int n = 9;
    std::string file = "/Users/ruadmar/CLionProjects/mephi_labs/Shapes.bmp";

    Image image = BmpReader::read(file.c_str());
    RGB data = image.getData();
    pthread_t * tid;
    tid = (pthread_t *) malloc (sizeof(pthread_t)*(MAX_THREADS-1));

    for (int i = 0; i < MAX_THREADS; i++) {
        pthread_create(tid+i, NULL, , &i);
    }

//    For(int i=0; i<3; i++)
//    {
//        t[i].start = i*N/3;
//        t[i].end = (i+1)*N/3;
//        th[i] = CreateThread(NULL, 0, answerFuncsion, &t, 0, &th_id[i]); // th_id + i
//    }


    //A = 0 - на 9 частей разбить массив последовательно
    //B = 4 + 5 = 9 - 9 потоков

}
