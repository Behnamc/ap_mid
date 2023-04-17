#include "Animal.h"

float Animal::similar(Animal other) {
    int ans = 0, similar = 0;

    int min_size = (
        other.chromosomes.size() > chromosomes.size()
    ) ? chromosomes.size() : other.chromosomes.size();

    for (auto &i: chromosomes) {ans += i.get("DNA").size();}
    for (auto &i: other.chromosomes) {ans += i.get("DNA").size();}
    ans /= 2;

    for (int i = 0; i < min_size; i++) {
        int min_size_str = (
            other.chromosomes[i].get("DNA").size() > chromosomes[i].get("DNA").size()
        ) ? chromosomes[i].get("DNA").size() : other.chromosomes[i].get("DNA").size();

        for (int j = 0; j < min_size_str; j++) {
            if (chromosomes[i].get("DNA")[j] == other.chromosomes[i].get("DNA")[j]) {
                similar++;
            }
        }
    }

    return (float)similar / ans;
}

bool Animal::operator==(Animal other) {
    if (
        (similar(other) >= 0.7) && 
        (chromosomes.size() == other.chromosomes.size())
    ) {
        return true;
    }
    return false;
}

Animal Animal::create_new() {
    int n = chromosomes.size();

    int mark[2*n];
    fill(mark, mark+2*n, 0); // set mark zero

    Animal ans(0);

    for (int i = 0; i < n;) {
        int j = rand() % n;
        if (mark[j] < 2) {
            ans.chromosomes.push_back(chromosomes[j]);
            mark[j]++;
            i++;
        }
    }
    return ans;
}

Animal Animal::operator+(Animal other) {
    if (chromosomes.size() != other.chromosomes.size()) 
        throw string("not equal number of chromosomes");
    if (chromosomes.size() % 2 == 0)
        throw string("number of chromosomes must be even");
        
    int n = chromosomes.size();
    Animal a = create_new(), b = other.create_new(), ans(n);

    bool mark1[n], mark2[n];
    fill(mark1, mark1 + n, false);
    fill(mark2, mark2 + n, false);

    for (int i = 0; i < n/2;) {
        int j = rand() % n;
        if (!mark1[j]) {
            ans.chromosomes.push_back(chromosomes[j]);
            mark1[j] = true;
            i++;
        }
    }

    for (int i = 0; i < n/2;) {
        int j = rand() % n;
        if (!mark2[j]) {
            ans.chromosomes.push_back(other.chromosomes[j]);
            mark2[j] = true;
            i++;
        }
    }

    return ans;
}

string Animal::biggest_substr() {
    string ans = "", a = chromosomes[0].get("DNA");

    for (int i = 0; i < a.size(); i++) {
        for (int j = a.size(); (j >= i) && (j-i > ans.size()); j--) {
            // string i-j in a
            // for all chromosomes
            bool add = true;
            string sub = a.substr(i, j-i);
            for (int k = 1; k < chromosomes.size(); k++) {
                // if sub not in chromosomes[k] -> cancel
                if (chromosomes[k].get("DNA").find(sub) == string::npos) {
                    add = false;
                    break;
                }
            }
            if (add) {
                ans = sub;
            }
        }
    }

    return ans;
}
