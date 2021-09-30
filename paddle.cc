#include "paddle.h"
using namespace std;

#include <iostream>

Paddle::Paddle() {
    x = y = 0;
}

Paddle::Paddle(int posX, int posY) {
    x = posX;
    y = posY;
    originalX = posX;
    originalY = posY;
}

ostream & operator<<(ostream & out, Paddle p) {// use namespace in cc and use namespace or std::ostream in cc and header
    out << "paddle[" << p.x << ", " << p.y << "]";
    return out;
}