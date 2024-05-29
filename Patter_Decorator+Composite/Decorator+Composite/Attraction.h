#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// lowest common denominator DECORATOR
class Attraction {
public:
    virtual ~Attraction() {}
    virtual void showInfo() const = 0;
    virtual string getStatus() const = 0;
    virtual string getDate() const = 0;
};

// main class DECORATOR
class ConcreteAttraction : public Attraction {
    string name;
    string status;
    string date;
public:
    ConcreteAttraction(string n, string s, string d){
        name = n;
        status = s;
        date = d;
    }
    void showInfo() const override {
        cout << "Attraction: " << name << ", Status: " << status << ", Date: " << date << endl;
    }
    string getStatus() const override { return status; }
    string getDate() const override { return date; }
};

// gouping of attractions COMPOSITE
class AttractionGroup : public Attraction { 

public:
    vector<Attraction*> attractions;


    void add(Attraction* attr) {
        attractions.push_back(attr);
    }
    void showInfo() const override {
        for (int i = 0; i < attractions.size(); i++)
            attractions[i]->showInfo();
    }

    string getStatus() const override {
        return ""; 
    }

    string getDate() const override {
        return ""; 
    }

    vector<Attraction*> getAttractions() {
        return attractions;
    }
};
