#pragma once
#include "Map.h"
#include "Adapters.h"

// for map managing FACADE
class ParkFacade {
    Map* parkMap;
public:
    ParkFacade() {
        parkMap = new Map();
    }

    void addAttraction(string n, string d, int age, string st, string et, bool ws) {
        Attraction* attr = new Attraction(n, d, age, st, et, ws);
        MapObject* obj = new AttractionAdapter(attr);
        parkMap->addObject(obj);
    }

    void addRestaurant(string n, string d, float r, string c) {
        Restaurant* rest = new Restaurant(n, d, r, c);
        MapObject* obj = new RestaurantAdapter(rest);
        parkMap->addObject(obj);
    }

    void addToilet(string name, string description) {
        Toilet* toil = new Toilet(name, description);
        MapObject* obj = new ToiletAdapter(toil);
        parkMap->addObject(obj);
    }

    void displayPark() const {
        parkMap->displayObjects();
    }

    ~ParkFacade() {
        delete parkMap;
    }
};
