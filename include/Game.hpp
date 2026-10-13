// CPP_TEXT_RPG
// File: Game.hpp
// Author(s): Joseph Egger
//
// The base Game class which contains the functions required for the game loop 
// such as ProcessInputs(), Update() and Draw().

#ifndef GAME_HPP
#define GAME_HPP

class Game
{
    public:
        Game();
        ~Game();

        void Run();

    private:
        bool mIsRunning;

        bool Init();
        void ProcessInputs();
        void Update();
        void Draw();
};

#endif