#pragma once
#include <vector>
#include "Golem.h"
#include "Troll.h"
#include "Enemy.h"

enum class GameState {PLAY, EXIT};
class Player;
class Level;
class MainGame
{
public:
    MainGame();
    ~MainGame();
    void Run();

private:
    void Init();
    void GameLoop();

    Player* m_player;
    Level* m_level;
    GameState m_gameState;

    std::vector <Enemy*> m_enemies;
};

