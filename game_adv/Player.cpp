#include "Player.h"
#include <conio.h>


Player::Player()
{
}


Player::~Player()
{
}

void Player::Update(Level* level)
{
    char move = _getch();
    switch (move)
    {
    case 'w':
        level->SetCharAt(m_position.x, m_position.y, '.');
        m_position.y--;
        level->SetCharAt(m_position.x, m_position.y, '@');
        break;
    case 'a':
        level->SetCharAt(m_position.x, m_position.y, '.');
        m_position.x--;
        level->SetCharAt(m_position.x, m_position.y, '@');
        break;
    case 'd':
        level->SetCharAt(m_position.x, m_position.y, '.');
        m_position.x++;
        level->SetCharAt(m_position.x, m_position.y, '@');
        break;
    case 's':
        level->SetCharAt(m_position.x, m_position.y, '.');
        m_position.y++;
        level->SetCharAt(m_position.x, m_position.y, '@');
        break;
    }
}

void Player::SetPosition(int x, int y)
{
    m_position.x = x;
    m_position.y = y;
}
