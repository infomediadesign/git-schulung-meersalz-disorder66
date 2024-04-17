//
// Created by adria on 17.04.2024.
//

#include <vector>
#include <cstdint>
#include "iostream"
#include "raylib.h"

#ifndef RAYLIBSTARTER_SCENEADRIANA_H
#define RAYLIBSTARTER_SCENEADRIANA_H

class GameObject;
class Particle;

class SceneAdriana {
public:
    void update(); // first, update all objects, then delete those marked for deletion
    void draw();
    SceneAdriana(const char* _filename);

    // Collision detection functions
    bool touchesWall(Vector2 _pos, Vector2 _size);
    bool touchesWall(Vector2 _pos);
    Vector2 touchWallPosition(Vector2 _pos, Vector2 _size);
    Rectangle getWallArt(Vector2 _pos, Vector2 _size);
    std::vector<GameObject*> getGameObjectsAt(Vector2 _pos, Vector2 _size);
    // game object handling functions
    void addGameObject(GameObject* _object);
    GameObject* getGameObject(int64_t _id);
    //particle handling functions



private:
    std::vector<GameObject*> objects;
    std::vector<int> tilemap;
    std::vector<Particle*> particles;

    int mapWidth;
    int mapHeight;
};


#endif //RAYLIBSTARTER_SCENEADRIANA_H
