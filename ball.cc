#include "ball.h"
using namespace std;

Ball::Ball(int posX, int posY) {
    originalX = posX;
    originalY = posY;
    x = posX;
    y = posY;
    direction = STOP;
}

void Ball::reset() {
    x = originalX;
    y = originalY;
    direction = STOP;
}

void Ball::changeDirection (Dir newDirection) {
    direction = newDirection;
}

void Ball::move() {
    switch(direction) { //!
        case STOP:
            break;
        case LEFT:
            x--;
            break;
        case RIGHT:
            x++;
            break;
        case UPLEFT:
            x--, y--;
            break;
        case DOWNLEFT:
            x--, y++;
            break;
        case UPRIGHT:
            x++, y--;
            break;
        case DOWNRIGHT:
            x++, y++;
            break;
        default:
            break;
    }
}

ostream & operator<<(ostream & out, Ball b) { // why normal (no friend) in source file?
    out << "ball[" << b.x << ", " << b.y << "][" << b.direction << "]";
    return out;
}