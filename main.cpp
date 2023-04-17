#include "Gene.h"
#include "Cell.h"
#include "Animal.h"
#include "Virus.h"
#include "print.cpp"

#include <time.h>


int main() {
    srand(time(0));
    Gene gene, gene2 = Gene("TTAAGGCC");
    gene.set("DNA", "TTAAGGCC");
    cout << gene.get("RNA") << endl;
    gene.jahesh_big("DNA", "TT", "CCCC");
    cout << gene.get("DNA") << "\n--------\n";

    Animal a(2);
    a.chromosomes[0] = gene;
    a.chromosomes[1] = gene2;
    Animal b = a.create_new();
    cout << b.chromosomes.size() << endl;
    cout << b.chromosomes[0].get("DNA") << endl;
    cout << b.chromosomes[1].get("DNA") << endl;

    

}
