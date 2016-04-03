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

private:
    std::vector <std::string> m_levelData;
    bool m_needUpdate;
};

