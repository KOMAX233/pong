#include <iostream>
#include "ball.h"
#include "paddle.h"
//#include "game.h"
using namespace std;

int main(void) {
    //cout << "hello" << endl;
    Paddle p1(0,0);
    Paddle p2(10,0);
    cout << p1 << " " << p2 << endl;


    //not using game object!! should be fixed
    system("cls");//windows console
    // top wall
    for (int i = 0; i < 40+2; i++) {
        cout << "#";
    }
    cout << endl;
    // left and right walls
    for (int i = 0; i < 20; i++) {
        cout << "#";
        for (int j = 0; j < 40; j++) {
            cout << " ";
        }
        cout << "#" << endl;
    }
    // bottom wall
    for (int i = 0; i < 40+2; i++) {
        cout << "#";
    }
    cout << endl;
    //Game g(40, 40);
    //g.draw();
    return 0;
}

