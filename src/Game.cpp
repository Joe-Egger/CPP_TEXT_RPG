#include "Game.hpp"
#include <iostream>

Game::Game()
    : mIsRunning(true)
{

}

Game::~Game()
{

}

void Game::Run()
{
    if(!Init())
    {
        mIsRunning = false;
    }

    while(mIsRunning)
    {
        ProcessInputs();
        Update();
        Draw();
    }

    std::cout << "Bye" << std::endl;

}

bool Game::Init()
{
    std::cout << "Game initialized" << std::endl;
    return true;
}

void Game::ProcessInputs()
{
    std::cout << "Process Inputs" << std::endl;
}

void Game::Update()
{
    std::cout << "Update" << std::endl;
}

void Game::Draw()
{
    std::cout << "Draw" << std::endl;
}
