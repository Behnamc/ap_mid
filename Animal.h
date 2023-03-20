#pragma once
#include <iostream>
#include "Cell.h"
using namespace std;


class Animal: public Cell{
public:
    Animal(int n): Cell(n) {}
    // between 0-1
    float similar(Animal other);

    bool operator==(Animal other);
    
    Animal create_new();

    Animal operator+(Animal other);

    string biggest_substr() const;

private:

    friend class Virus;
};