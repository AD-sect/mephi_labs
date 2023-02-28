#include "RGB.h"

int *RGB::getR() const {
    return R;
}

void RGB::setR(int *r) {
    R = r;
}

int *RGB::getG() const {
    return G;
}

void RGB::setG(int *g) {
    G = g;
}

int *RGB::getB() const {
    return B;
}

void RGB::setB(int *b) {
    B = b;
}

RGB::RGB(int size) {
    this->R = new int[size];
    this->G = new int[size];
    this->B = new int[size];
}

RGB::RGB() {}
