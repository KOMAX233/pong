#ifndef BALL_H_
#define BALL_H_
#include <iostream>

enum Dir {//!
    STOP = 0, 
    LEFT = 1, 
    UPLEFT = 2, 
    DOWNLEFT = 3, 
    RIGHT = 4, 
    UPRIGHT = 5,  
    DOWNRIGHT = 6 
}; // we need ";" after enum declaration!

class Ball {
    private:
        int x, y;
        int originalX, originalY;
        Dir direction;
    public:
        Ball(int posX, int posY);

        void reset();

        void changeDirection (Dir newDirection);

        inline int getX() const { //! why do we need definition of inline function in the header file?
            return x;
        }

        inline int getY() const { //!
            return y;
        }

        inline Dir randomdir() {
            direction = (Dir)((rand() % 6) + 1);//!
            return direction;
        }

        void move();
        
        friend std::ostream & operator<<(std::ostream & out, Ball b);
};

#endif