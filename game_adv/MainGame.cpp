#include "MainGame.h"
#include "Player.h"

MainGame::MainGame() : m_gameState(GameState::PLAY)
{
}

MainGame::~MainGame()
{
    delete m_level;
    delete m_player;
}

void MainGame::Run()
{
    Init();
    GameLoop();
}

void MainGame::Init()
{
    m_level = new Level();
    m_level->LoadLevel("levels/level1.txt");
    m_player = new Player();
    m_level->SetPlayer(m_player);
}

void MainGame::GameLoop()
{
    while (m_gameState != GameState::EXIT)
    {
        m_level->Draw();
        m_player->Update(m_level);
    }
}
