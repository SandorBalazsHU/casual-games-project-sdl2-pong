#include "pong.hpp"

Pong::Pong()
{
	gameWindow = Window();
}

Pong::~Pong()
{
}

Window::Window(const char* title, int startPositionX, int startPositionY, int width, int height, bool fullscrean)
{
	
}

int Window::init(const char* title, int startPositionX, int startPositionY, int width, int height, bool fullscrean)
{
	atexit( this->exit );
	int flags = SDL_WINDOW_SHOWN;
	if(fullscrean){
		flags = flags | SDL_WINDOW_FULLSCREEN;
	}

	int sdlInit = SDL_Init(SDL_INIT_EVERYTHING)
	if(sdlInit != 0) Return -1;

	window = SDL_CreateWindow(title, startPositionX, startPositionY, width, height, flags);
	if(!window) Return -2;

	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	if(renderer) Return -3;
	
	return 0;
}

void exit()
{

}

Window::~Window()
{
	
}