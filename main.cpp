#include "Gene.h"
#include "Cell.h"
#include "Animal.h"
#include "Virus.h"
#include "print.cpp"

void display_menu() {
    cout <<
    "new Gene\n"
    "new Cell\n"
    "new Animal\n"
    "new Virus\n";
}

void menu_handler() {
    string inp;
    cin >> inp;
    if (inp=="exit") {
        throw "Good bye!";
    } else if (inp=="new") {
        cin >> inp;
        if (inp=="animal") {
            
        }
    } else {
        throw "incorrect input";
    }
}
template<class... Args>
void print(Args... args)
{
    (cout << ... << args) << "\n";
}

int main() {
    // while (true) {
    //     display_menu();
    //     try {
    //         menu_handler();
    //     } catch (const char* err) {
    //         cout << ">>> " << err << endl;
    //     }
    // }
    // test_menu();
    cout
    print(1, ':', " Hello", ',', " ", "World!");
    Gene g;
    g.dna_from_rna();

}
