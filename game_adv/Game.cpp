#include "Game.h"

#include "Level.h"
#include "Player.h"

Game::Game()
{
}


Game::~Game()
{
    delete m_level;
    delete m_player;
}

void Game::Init()
{
    m_level = new Level();
    m_level->LoadLevel("levels/level1.txt");

    m_player = new Player();
}

void Game::Update()
{
    m_level->Draw();
    m_player->Update();
}
