#include <string>
#include <iostream>
#include <windows.h>
using namespace std;

namespace con
{

#define BLUE 9
#define GREEN 10
#define CYAN 11
#define RED 12
#define PUREPLE 13
#define ORANGE 14
#define WHITE 15
#define NORMAL 7

    bool start = false;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    void set_color(const int &color)
    {
        SetConsoleTextAttribute(hConsole, color);
    }

    template <typename T>
    void get(string title, T &t)
    {
        if (!start) {
            start = true;
            system("cls");
        }
        set_color(PUREPLE);
        cout << "Enter " << title << " : ";
        set_color(ORANGE);
        cin >> t;
    }

    void menu() {
        system("cls");
        set_color(BLUE);
        cout << "1. part one\n";
        set_color(WHITE);
        cout << "Enter:";
        set_color(NORMAL);
    }

};

int main()
{
    string name, lastname;
    con::menu;
    con::get("name", name);
    con::get("lastname", lastname);
    con::menu();
    cin >> name;
    // cout << name << " " << lastname << endl;
}