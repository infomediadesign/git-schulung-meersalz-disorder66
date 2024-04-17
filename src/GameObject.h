#pragma once

#include <string>
#include <cstdint>
#include "raylib.h"
#include "raymath.h"

class GameObject {
public:
    virtual void Update() = 0;
    virtual void Draw() = 0;

    Vector2 getPosition() const;
protected:
    int64_t id;
    Vector2 position;
    float size;
    Texture2D sprite;
    std::string name;
};
