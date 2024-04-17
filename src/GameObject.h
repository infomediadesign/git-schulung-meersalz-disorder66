#pragma once

#include <string>
#include <cstdint>
#include "raylib.h"
#include "raymath.h"

class GameObject {
public:
    void update();
    void draw();

    Vector2 getPosition() const;
private:
    int64_t id;
    Vector2 postion;
    Texture2D sprite;
    std::string name;
};
