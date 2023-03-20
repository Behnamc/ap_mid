#pragma once
#include "functions.h"
#include <iostream>
#include <map>
using namespace std;


class Gene{
public:
    Gene(string dna="", string dna2="", string rna="");

    void set_dna2();

    void set(string name, string value, string value2="");

    string get(string name) const;

    void set_dna_from_rna();

    void jahesh_small(string name, 
        char first, char second, int n);

    void jahesh_big(string name, 
        string first, string second, int n);


    void jahesh_reverse(string name, string rev);

protected:
    map<string, string> var;
    
};
