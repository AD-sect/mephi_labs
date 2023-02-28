#include "Image.h"

int Image::getSize() const {
    return size;
}

void Image::setSize(int size) {
    Image::size = size;
}

const RGB &Image::getData() const {
    return data;
}

void Image::setData(int* R, int* G, int* B ){
    RGB rgb = RGB(this->size);
    rgb.setR(R);
    rgb.setG(G);
    rgb.setB(B);
    this->data = rgb;
}

Image::Image(int size, RGB data){
    this->size = size;
    this->data = data;
}
