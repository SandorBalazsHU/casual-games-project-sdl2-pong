#ifndef BALL_H
#define BALL_H

#include <SDL.h>
#include <SDL_image.h>

#include <random>

class Ball
{
public:
    Ball() = default;
    ~Ball();
    void init(SDL_Renderer *renderer, int x, int y);
    void update(double delta_time);
    void draw(SDL_Renderer *renderer);
private:
    int m_velocity_x;
    int m_velocity_y;
    double m_x;
    double m_y;
    SDL_Texture *m_image;
    SDL_Rect m_position;
};

#endif /* BALL_H */