#include <iostream>
#include "ball.h"
#include "paddle.h"
using namespace std;

int main(void) {
    Paddle p1(0,0);
    Paddle p2(10,0);
    cout << p1 << " " << p2 << endl;
    p1.moveup();
    p2.moveup();
    cout << p1 << " " << p2 << endl;
    p1.moveup();
    p2.moveup();
    cout << p1 << " " << p2 << endl;
    p1.reset();
    p2.reset();
    cout << p1 << " " << p2 << endl;
    return 0;
}

