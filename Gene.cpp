#include "Gene.h"

Gene::Gene(string dna, string dna2, string rna) {
    var["DNA"] = dna;
    var["DNA2"] = dna2;
    var["RNA"] = rna;
}

void Gene::set_dna2() {
    var["DNA2"] = mokamel(var["DNA"]);
}

void Gene::set(string name, string dna, string dna2) {
    var[name] = dna;
    if (dna2 != "") {
        var["DNA2"] = dna2;
    } else if(name == "DNA") {
        set_dna2();
    }
}

string Gene::get(string name) {
    return var[name];
}


string Gene::dna_from_rna() {
    return mokamel(var["RNA"]);
}

void Gene::jahesh_small(string name, char first, char second, int n) {
    replace_char(var[name], first, second, n);
    if (name == "DNA")
        set_dna2();
}

void Gene::jahesh_big(string name, string first, string second) {
    replace_first(var[name], first, second);
    if (name == "DNA")
        set_dna2();
}

void Gene::jahesh_reverse(string name, string rev) {
    reverse_in(var[name], rev);
    if (name == "DNA")
        set_dna2();
}
