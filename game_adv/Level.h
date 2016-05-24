#pragma once
#include <vector>
#include <string>

class Player;
class Enemy;
class Level
{
public:
    Level();
    ~Level();

    bool LoadLevel(const std::string& filePath);
    void Draw();
    void SetPlayer(Player* player);
    void SetEnemies(std::vector <Enemy*>& enemies);
    void SetCharAt(int x, int y, char c);
    char GetCharAt(int x, int y) { return m_levelData[y][x]; }

private:
    std::vector <std::string> m_levelData;
};

