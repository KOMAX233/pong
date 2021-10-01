#ifndef PADDLE_H_
#define PADDLE_H_
#include <iostream>

class Paddle {
    private:
        int x,y;
        int originalX, originalY;
    public:
        Paddle();
        Paddle(int posX, int posY);
        inline void reset() {
            x = originalX;
            y = originalY;
        }

        inline int getX() const { return x; }
        inline int getY() const { return y; }

        inline void moveup() {
            y--;
        }

        inline void movedown() {
            y++;
        }

        friend std::ostream& operator<<(std::ostream& out, Paddle p);
};

#endif