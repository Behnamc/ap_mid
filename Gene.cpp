#include "Gene.h"

Gene::Gene(string dna="", string dna2="", string rna="") {
    var["DNA"] = dna;
    var["DNA2"] = dna2;
    var["RNA"] = rna;
}

void Gene::set_dna2() {
    var["DNA2"] = mokamel(var["DNA"]);
}

void set(string name, string value, string dna2="") {
    var[name] = value;
    if (dna2 != "") {
        var["DNA2"] = dna2;
    } else if(name == "DNA") {
        set_dna2();
    }
}

string get(string name) const {
    return var[name];
}


void Gene::set_dna_from_rna() {
    var["DNA"] = var["RNA"];
    var["DNA2"] = mokamel(var["RNA"]);
}

void Gene::jahesh_small(string name, char first, char second, int n) {
    replace(var[name], first, second, n);
    if (name == "DNA")
        set_dna2();
}

void Gene::jahesh_big(string name, string first, string second, int n) {
    replace(var[name], first, second, n);
    if (name == "DNA")
        set_dna2();
}

void Gene::jahesh_reverse(string name, string rev) {
    reverse_in(var[name], rev);
    if (name == "DNA")
        set_dna2();
}
