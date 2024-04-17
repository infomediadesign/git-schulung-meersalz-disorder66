//
// Created by adria on 17.04.2024.
//

#include <vector>
#include "iostream"
#include "raylib.h"

#ifndef RAYLIBSTARTER_SCENEADRIANA_H
#define RAYLIBSTARTER_SCENEADRIANA_H

class GameObject;

class SceneAdriana {
public:
    void update();
    void draw();
    SceneAdriana(const char* _filename);

    // Collision detection functions
    bool touchesWall(Vector2 _pos, Vector2 _size);
    bool touchesWall(Vector2 _pos);


private:
    std::vector<GameObject*> objects;
    std::vector<int> tilemap;
};


#endif //RAYLIBSTARTER_SCENEADRIANA_H
