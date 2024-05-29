#pragma once
#include "Attraction.h"

// 2d lvl base class for additional func DECORATOR
class AttractionDecorator : public Attraction {
protected:
    Attraction* decoratedAttraction;
public:
    AttractionDecorator(Attraction* attr) : decoratedAttraction(attr) {}
    void showInfo() const override {
        decoratedAttraction->showInfo();
    }
    string getStatus() const override {
        return decoratedAttraction->getStatus();
    }
    string getDate() const override {
        return decoratedAttraction->getDate();
    }
};

// pidclasses DECORATOR
class FilterByStatus : public AttractionDecorator {
    string status;
public:
    FilterByStatus(Attraction* attr, string s) : AttractionDecorator(attr), status(s) {}
    void showInfo() const override {
        if (decoratedAttraction->getStatus() == status)
            decoratedAttraction->showInfo();
    }
};

class FilterByDate : public AttractionDecorator {
    string date;
public:
    FilterByDate(Attraction* attr, string d) : AttractionDecorator(attr), date(d) {}
    void showInfo() const override {
        if (decoratedAttraction->getDate() == date)
            decoratedAttraction->showInfo();
    }
};
