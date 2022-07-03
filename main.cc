#include <SDL2/SDL.h>
//#include <SDL2/SDL_image.h>
#include <SDL2/SDL_timer.h>

#include <iostream>

using namespace std;
#define width 1280
#define height 720
#define FPS 60

int WinMain(int argc, char* argv[]) {
  // initialize everything
  if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
    cout << "ERROR: fail to initialize SDL, " << SDL_GetError() << endl;
    SDL_Quit();
    return 0;
  } else {
    cout << "SDL initialized." << endl;
  }
  // create window
  auto wind = SDL_CreateWindow("pong", SDL_WINDOWPOS_CENTERED,
                               SDL_WINDOWPOS_CENTERED, width, height, 0);
  if (!wind) {
    cout << "ERROR: fail to create window, " << SDL_GetError() << endl;
    SDL_Quit();
    return 0;
  } else {
    cout << "SDL window created." << endl;
  }
  // creater renderer
  auto render_flag = SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC;
  auto rend = SDL_CreateRenderer(wind, -1, render_flag);
  if (!rend) {
    cout << "ERROR: fail to create renderer, " << SDL_GetError() << endl;
    SDL_DestroyWindow(wind);
    SDL_Quit();
    return 0;
  } else {
    cout << "SDL renderer created." << endl;
  }
  // test drawing
  bool running = true;
  SDL_Rect rec{100, 100, 100, 100};
  while (running) {
    // switch(SDL_GetKeyboardState())
    SDL_SetRenderDrawColor(rend, 0, 250, 150, 255);
    SDL_RenderFillRect(rend, &rec);
    SDL_RenderPresent(rend);
    SDL_Delay(1000 / FPS);
  }

  // create event
  // create control
  // clear
  SDL_DestroyRenderer(rend);
  SDL_DestroyWindow(wind);
  return 0;
}
// g++ -std=c++17 main.cc -Ix86_64-w64-mingw32/include -Lx86_64-w64-mingw32/lib
// -lSDL2main -lSDL2 -Wall -o a