#pragma once

enum class GameState {PLAY, EXIT};

class Game;
class MainGame
{
public:
    MainGame();
    ~MainGame();
    void Run();

private:
    void Init();
    void GameLoop();


    Game* m_game;
    GameState m_gameState;
};

