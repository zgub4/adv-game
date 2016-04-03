#include "Level.h"
#include <fstream>

#include <iostream>
#include "Player.h"

Level::Level() : m_needUpdate(true)
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
}

void Level::Draw()
{
    if (m_needUpdate != false)
    {
        for (int i = 0; i < m_levelData.size(); i++)
            std::cout << m_levelData[i] << std::endl;
        m_needUpdate = false;
    }
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