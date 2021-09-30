#ifndef GAME_H_
#define GAME_H_
#include <iostream>
#include "ball.h"
#include "paddle.h"
#include <time.h> //!
#include <conio.h> //!


class Game {
    private:
        int width, height;
        int score1, score2;
        char up1, down1, up2, down2; // used for connect with keys
        bool quit;
        Ball * ball1;
        Paddle * player1;
        Paddle * player2;
    public:
        Game(int w, int h);
        ~Game();
        void scoreUp(Paddle * player);
};

#endif