#include <iostream>
#include <windows.h>
using namespace std;


#define BLUE 9
#define GREEN 10
#define CYAN 11
#define RED 12
#define PUREPLE 13
#define ORANGE 14
#define WHITE 15
#define NORMAL 7
#define GRAY_WHITE 143

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

void set_color(const int &color)
{
    SetConsoleTextAttribute(hConsole, color);
}

void all_color()
{
    // you can loop k higher to see more color choices
    for (int k = 1; k < 255; k++)
    {
        // pick the colorattribute k you want
        SetConsoleTextAttribute(hConsole, k);
        cout << k << " I want to be nice today!" << endl;
    }
}

void good_bye()
{
    for (;;)
    {
        cout << "\b\b\b\b\b\b\b\b\b\b\bGood-bye   " << flush;
        Sleep(100);
        cout << "\b\b\b\b\b\b\b\b\b\b\bGOod-bye   " << flush;
        Sleep(100);
        cout << "\b\b\b\b\b\b\b\b\b\b\bGoOd-bye   " << flush;
        Sleep(100);
        cout << "\b\b\b\b\b\b\b\b\b\b\bGooD-bye   " << flush;
        Sleep(100);
        cout << "\b\b\b\b\b\b\b\b\b\b\bGood-Bye   " << flush;
        Sleep(100);
        cout << "\b\b\b\b\b\b\b\b\b\b\bGood-bYe   " << flush;
        Sleep(100);
        cout << "\b\b\b\b\b\b\b\b\b\b\bGood-byE   " << flush;
        Sleep(100);
        cout << "\b\b\b\b\b\b\b\b\b\b\bGood-bye.  " << flush;
        Sleep(100);
        cout << "\b\b\b\b\b\b\b\b\b\b\bGood-bye.." << flush;
        Sleep(100);
        cout << "\b\b\b\b\b\b\b\b\b\b\bGood-bye..." << flush;
        Sleep(100);
    }
}

string name;

void menu()
{
    set_color(BLUE);
    system("cls");
    cout << "hello "
         << name
         << "\n1.set your name";
    set_color(RED);
    cout << "\nEnter:";
    set_color(CYAN);
}

void test_menu()
{
    system("cls");
    while (true)
    {
        menu();
        string tmp;
        cin >> tmp;
        system("cls");
        if (tmp == "1")
        {
            set_color(PUREPLE);
            cout << "enter your name:";

            set_color(ORANGE);
            cin >> name;


        }
    }
}
