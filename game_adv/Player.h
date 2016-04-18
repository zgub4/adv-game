#pragma once
#include "Level.h"

struct vec2
{
    int x;
    int y;
};

class Player
{
public:
    Player();
    ~Player();
    void Update(Level* level);
    void SetPosition(int x, int y);

private:
    vec2 m_position;
};

