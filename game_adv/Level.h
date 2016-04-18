#pragma once
#include <vector>
#include <string>

class Player;
class Level
{
public:
    Level();
    ~Level();

    bool LoadLevel(const std::string& filePath);
    void Draw();
    void SetPlayer(Player* player);
    void SetCharAt(int x, int y, char c);

private:
    std::vector <std::string> m_levelData;
};

