#pragma once

#include <string>
#include <cstdint>
#include "raylib.h"
#include "raymath.h"

class GameObject {
public:
    virtual void update() = 0;
    virtual void draw() = 0;

    Vector2 getPosition() const;
protected:
    int64_t id;
    Vector2 postion;
    Texture2D sprite;
    std::string name;
};
