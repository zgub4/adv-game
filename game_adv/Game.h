#pragma once

class Level;
class Player;
class Game
{
public:
    Game();
    ~Game();
    void Init();
    void Update();
private:
    Level* m_level;
    Player* m_player;
};

