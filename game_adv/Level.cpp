#include "Level.h"
#include <fstream>

#include <iostream>
#include "Player.h"
#include "Enemy.h"
#include "Golem.h"
#include "Troll.h"

Level::Level()
{
}


Level::~Level()
{
}

bool Level::LoadLevel(const std::string& filePath)
{
    std::ifstream file(filePath); // Open file
    if (file.fail()) // Check if it opened properly
    {
        std::cout << "Could not open file with path " << filePath << std::endl;
        return false;
    }
    std::string buff; // Buffor for holding strings from file and push them to level data
    while (std::getline(file, buff))
        m_levelData.push_back(buff);
    return true;
}

void Level::Draw()
{
    // Print empty strings
    static std::string str(10, '\n');
    printf("%s", str.c_str());

    // Print map
    for (int i = 0; i < m_levelData.size(); i++)
        printf("%s\n", m_levelData[i].c_str());
}

void Level::SetPlayer(Player* player)
{
    for (int i = 0; i < m_levelData.size(); i++)
    {
        for (int j = 0; j < m_levelData[i].size(); j++)
        {
            if (m_levelData[i][j] == '@')
                player->SetPosition(j, i);
        }
    }
}

void Level::SetEnemies(std::vector <Enemy*>& enemies)
{
    for (int i = 0; i < m_levelData.size(); i++)
    {
        for (int j = 0; j < m_levelData[i].size(); j++)
        {
            char c = m_levelData[i][j];
            Enemy* e = nullptr;

            switch (c)
            {
            case 'g':
                e = new Golem();
                e->SetName("Golem");
                e->SetPosition(j, i);
                std::cout << j << " " << i << std::endl;
                enemies.push_back(e);
                break;
            case 't':
                e = new Troll();
                e->SetName("Troll");
                e->SetPosition(j, i);
                std::cout << j << " " << i << std::endl;
                enemies.push_back(e);
                break;
            }
        }
    }
}

void Level::SetCharAt(int x, int y, char c)
{
    m_levelData[y][x] = c;
}
