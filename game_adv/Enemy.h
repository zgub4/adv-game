#pragma once
#include <string>
class Enemy
{
public:
    Enemy();
    ~Enemy();

    void SetPosition(int x, int y);
    void SetName(std::string name);
protected:
    int m_healthPoints;
    int m_x;
    int m_y;
    std::string m_name;
};

