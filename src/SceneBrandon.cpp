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
