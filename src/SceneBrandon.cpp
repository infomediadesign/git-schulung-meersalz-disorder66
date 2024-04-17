#include "SceneBrandon.h"

void SceneBrandon::update() {
    for (auto &gameObject: objects) {
        gameObject->Update();
    }
}

void SceneBrandon::draw() {
    for (auto &gameObject: objects) {
        gameObject->Draw();
    }
}

SceneBrandon::SceneBrandon(const char *filename) {
    if (filename == nullptr) {
        addGameObject(new Player());
        mapWidth = 10;
        mapHeight = 10;
        for (int i = 0; i < mapWidth * mapHeight; i++) {
            tileMap.push_back(GetRandomValue(0, 3));
        }
    }
}