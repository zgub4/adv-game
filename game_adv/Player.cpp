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
        if (level->GetCharAt(m_position.x, m_position.y - 1) == '#')
        {
            return;
        }
        level->SetCharAt(m_position.x, m_position.y, '.');
        m_position.y--;
        level->SetCharAt(m_position.x, m_position.y, '@');
        break;
    case 'a':
        if (level->GetCharAt(m_position.x-1, m_position.y) == '#')
        {
            return;
        }
        level->SetCharAt(m_position.x, m_position.y, '.');
        m_position.x--;
        level->SetCharAt(m_position.x, m_position.y, '@');
        break;
    case 'd':
        if (level->GetCharAt(m_position.x + 1, m_position.y) == '#')
        {
            return;
        }

       level->SetCharAt(m_position.x, m_position.y, '.');
        m_position.x++;
        level->SetCharAt(m_position.x, m_position.y, '@');
        break;
    case 's':
        if (level->GetCharAt(m_position.x, m_position.y+1) == '#')
    {
        return;
    }
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
