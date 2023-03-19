#pragma once
#include <iostream>
#include <algorithm>
using namespace std;


char mokamel(char c);

string mokamel(string s);

void replace(string &s, char first, char rep, int n=1);

void replace_first(
    string &s,
    string const &toReplace,
    string const &replaceWith);

void reverse_in(string &s,string const &torev);

bool is_palindrome(string s);