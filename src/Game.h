#ifndef GAME_H
#define GAME_H
#include "SDL.h"

const int TARGET_FPS = 30;
const int MILLISECS_PER_FRAME = 1000 / TARGET_FPS;

class Game {
    private:
        bool isRunning;
        int millisecsPreviousFrame = 0;
        SDL_Window* window;
        SDL_Renderer* renderer;

    public:
        Game();
        ~Game();
        void Initialize();
        void Run();
        void Setup();
        void ProcessInput();
        void Update();
        void Render();
        void Destroy();

        int windowWidth;
        int windowHight;
};

#endif