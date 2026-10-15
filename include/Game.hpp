// CPP_TEXT_RPG
// File: Game.hpp
// Author(s): Joseph Egger
//
// The base Game class which contains the functions required for the game loop 
// such as ProcessInputs(), Update() and Draw().

#ifndef GAME_HPP
#define GAME_HPP

#include <wx/wx.h>

#include <string>

#include "Character.hpp"
#include "Screen.hpp"

class Game
{
public:
    Game();
    ~Game() override;

    void Run();

private:
    bool mIsRunning;

    Character mCharacter;


    bool Init();
    void ProcessInputs();
    void Update();
    void Draw();

};

#endif