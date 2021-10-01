#include "game.h"
using namespace std;

Game::Game(int w, int h) {
    srand(time(NULL));//! use current time as seed for random generator
    quit = false;
    up1 = 'w';
    down1 = 's';
    up2 = 'i'; // want to change it to up and down keys
    down2 = 'k';
    score1 = 0;
    score2 = 0;
    width = w;
    height = h;
    ball1 = new Ball(w/2, h/2);
    player1 = new Paddle(1, h/2 - 3);//!
    player2 = new Paddle(w-2, h/2 - 3);//!
}

Game::~Game() {
    delete ball1, player1, player2;
}

void Game::scoreUp(Paddle * player) {
    if (player == player1) {
        score1++;
    }
    if (player == player2) {
        score2++;
    }

    ball1->reset();
    //player1->reset();
    //player2->reset();
}

void Game::draw() {
    system("cls");//windows console
    for (int i = 0; i < width; i++) {
        cout << "#" << flush;
    }
    cout << endl;
    for (int i = 0; i < width; i++) {
        cout << "#" << flush;
    }
}