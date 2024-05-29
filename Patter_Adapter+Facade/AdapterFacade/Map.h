#pragma once
#include <vector>
#include "MapObjects.h"

// for storing and managing what to do with objects on map FACADE
class Map {
    vector<MapObject*> objects;
public:
    void addObject(MapObject* obj) {
        objects.push_back(obj);
    }

    void displayObjects() const {
        for (const auto& obj : objects) {
            obj->display();
        }
    }
};
