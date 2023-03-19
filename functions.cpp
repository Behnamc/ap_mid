#include "functions.h"

char mokamel(char c) {
    if (c == 'A') {
        return 'T';
    } else if (c == 'T') {
        return 'A';
    } else if (c == 'C') {
        return 'G';
    } else if (c == 'G') {
        return 'C';
    } else {
        return c;
    }
}

string mokamel(string s) {
    string ans;
    for (auto &c: s) {
        c = mokamel(c);
    }
    return ans;
}

void replace(string &s, char first, char rep, int n=1) {
    for (int i = 0; i < s.size(); i++) {
        if (n != 0 and s[i] == first) {
            s[i] = rep;
            n--;
        }
    }
}

void replace_first(
    string &s,
    string const &toReplace,
    string const &replaceWith)
{
    size_t pos = s.find(toReplace);
    if (pos == string::npos)
        return;
    s.replace(pos, toReplace.length(), replaceWith);
}

void reverse_in(string &s,string const &torev)
{
    size_t pos = s.find(torev);
    if (pos == string::npos)
        return;
    string replaceWith = torev;
    reverse(replaceWith.begin(), replaceWith.end());
    s.replace(pos, torev.length(), replaceWith);
}

bool is_palindrome(string s) {
    for (int i = 0; i < s.size()/2; i++) {
        if (s[i] != mokamel(s[s.size() - 1 - i]))
            return false;
    }
    return true;
}