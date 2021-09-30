#include "game.h"

Game::Game(int w, int h) {
    
}

Game::~Game() {
    delete ball1, player1, player2;
}

void Game::scoreUp(Paddle * player) {
    if (player == player1) {
        score1++;
    } else {
        score2++;
    }
}