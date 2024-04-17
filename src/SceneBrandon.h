#pragma once

#include <vector>
#include "raylib.h"
#include "raymath.h"

class GameObject;

class SceneBrandon {
public:
    void update();
    void draw();
    SceneBrandon(const char * filename);

    bool touchesWall(Vector2 pos, Vector2 size);
    bool touchesWall(Vector2 pos);
    Vector2 touchesWallPosition(Vector2 pos, Vector2 size);
    Rectangle getWallAt(Vector2 pos, Vector2 size);
private:
    std::vector<GameObject*> objects;
    std::vector<int> tileMap;
    int mapWidth;
    int mapHeight;
};