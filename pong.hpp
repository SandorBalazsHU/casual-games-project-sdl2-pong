#ifndef PONG_H
#define PONG_H

#include <SDL.h>

class Pong
{
public:
    Pong();
    ~Pong();
    void start();

private:
    Window gameWindow;
};

class Window
{
public:
    Window();
    ~Window();

private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    bool isRunning;

    int init(const char* title, int startPositionX, int startPositionY, int width, int height, bool fullscrean);
    void eventHandler();
    void update();
    void render();
    void gameLoop();
    void clean();
    bool isRunning();

}

#endif /* PONG_H */