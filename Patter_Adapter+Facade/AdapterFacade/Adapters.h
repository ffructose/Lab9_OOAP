#pragma once
#include "MapObjects.h"

//  converts attraction to  MapObject ADAPTER
class AttractionAdapter : public MapObject {
    Attraction* attraction;
public:
    AttractionAdapter(Attraction* attr) {
        name = attr->name;
        description = attr->description;
        attraction = attr;
    }

    void display() const override {
        cout << "������i��: " << name << ", ����: " << description << endl;
    }
};

class RestaurantAdapter : public MapObject {
    Restaurant* restaurant;
public:
    RestaurantAdapter(Restaurant* rest) {
        name = rest->name;
        description = rest->description;
        restaurant = rest;
    }

    void display() const override {
        cout << "��������: " << name << ", ����: " << description << endl;
    }
};

class ToiletAdapter : public MapObject {
    Toilet* toilet;
public:
    ToiletAdapter(Toilet* toil) {
        name = toil->name;
        description = toil->description;
        toilet = toil;
    }

    void display() const override {
        cout << "������: " << name << ", ����: " << description << endl;
    }
};
