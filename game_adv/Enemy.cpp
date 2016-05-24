#include "Enemy.h"



Enemy::Enemy()
{
}


Enemy::~Enemy()
{
}

void Enemy::SetPosition(int x, int y)
{
    m_x = x;
    m_y = y;
}

void Enemy::SetName(std::string name)
{
    m_name = name;
}
