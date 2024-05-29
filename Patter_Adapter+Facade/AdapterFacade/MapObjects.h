#pragma once
#include <iostream>
#include <string>
using namespace std;

// base class for all the possible types that can be on map ADAPTER
class MapObject {
public:
    string name;
    string description;
    virtual void display() const = 0;
};

class Attraction : public MapObject {
public:
    int allowed_age;
    string start_time;
    string end_time;
    bool work_status;

    Attraction(string n, string d, int age, string st, string et, bool ws) {
         name = n;
         description = d;
         allowed_age = age;
         start_time = st;
         end_time = et;
         work_status = ws;
    }

    void display() const override {
        cout << "������i��: " << name << ", ����: " << description << ", �i���� ���������: " << allowed_age <<
            "+, ����i� ������: " << start_time << " - " << end_time << ", ������ ������: " << (work_status ? "�i������" : "�������")  << endl;
    }
};

class Restaurant : public MapObject {
    float rate;
    string cuisine;
public:
    Restaurant(string n, string d, float r, string c) {
        name = n;
        description = d;
        rate = r;
        cuisine = c;
    }
    void display() const override {
        cout << "��������: " << name << ", ����: " << description << ", ��i���: " << rate << "+, �����: " << cuisine << endl;
    }
};

class Toilet : public MapObject {
public:
    Toilet(string n, string d) {
        name = n;
        description = d;
    }
    void display() const override {
        cout << "������: " << name << ", ����: " << description << endl;
    }
};
