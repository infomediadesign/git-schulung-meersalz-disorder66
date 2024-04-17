#pragma once

#include <vector>
#include <cstdint>
#include "raylib.h"
#include "raymath.h"
#include "GameObject.h"
#include "GameObjects/Player.h"

class GameObject;
class Particle;

class SceneBrandon {
public:
    void update(); //first update all objects, then delete those marked for deletion
    void draw();
    SceneBrandon(const char * filename);
    //Collision detection functions
    bool touchesWall(Vector2 pos, Vector2 size);
    bool touchesWall(Vector2 pos);
    Vector2 touchesWallPosition(Vector2 pos, Vector2 size);
    Rectangle getWallAt(Vector2 pos, Vector2 size);
    std::vector<GameObject*> getGameObjectsAt(Vector2 pos, Vector2 size);
    //game object handling functions
    void addGameObject(GameObject * gameObject);
    GameObject* getGameObject(int64_t id);

    void addParticles();
private:
    std::vector<GameObject*> objects;
    std::vector<int> tileMap;
    std::vector<Particle*> particles;
    int mapWidth;
    int mapHeight;
};