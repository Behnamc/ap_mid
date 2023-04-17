#pragma once
#include "functions.cpp"
using namespace std;


class Gene{
public:
    Gene() {}

    Gene(string dna, string dna2="", string rna="");

    void set_dna2();

    void set(string name, string dna, string dna2="");

    string get(string name);

    string dna_from_rna();

    void jahesh_small(string name, 
        char first, char second, int n);

    void jahesh_big(string name, 
        string first, string second);


    void jahesh_reverse(string name, string rev);

protected:
    map<string, string> var;
    
};

