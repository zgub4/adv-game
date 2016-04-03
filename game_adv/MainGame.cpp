#include "MainGame.h"
#include "Game.h"

MainGame::MainGame() : m_gameState(GameState::PLAY)
{
}


MainGame::~MainGame()
{
}

void MainGame::Run()
{
    Init();
    GameLoop();
}

void MainGame::Init()
{
    m_game = new Game();
    m_game->Init();
}

void MainGame::GameLoop()
{
    while (m_gameState != GameState::EXIT)
    {
        m_game->Update();
    }
}
