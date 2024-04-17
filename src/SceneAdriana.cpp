//
// Created by adria on 17.04.2024.
//

#include "SceneAdriana.h"
#include "GameObject.h"

void SceneAdriana::update() {
    for (auto& object : objects) {
        object->update();
    }
}

void SceneAdriana::draw() {
    for (auto& object : objects) {
        object->draw();
    }
}

SceneAdriana::SceneAdriana(const char *_filename) {
    if (_filename == nullptr) {

    }
}
