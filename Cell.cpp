#pragma once
#include "Cell.h"

Cell::Cell(int n) {
	chromosomes = vector<Gene>(n);
}

bool Cell::del_chromosome() {
	for (auto &gene: chromosomes) {
		string s = gene.get("DNA");
		int d = 0;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] != mokamel(gene.get("DNA2")[i]))
				d++;
		}
		if (d > 5) {
			return false;
		}
    	int AT = 0, CG = 0;
    	for (int i = 0; i < s.size() - 1; i++) {
    	    if (s[i] == 'A' and s[i+1] == 'A') {
    	        AT++;
    	    } else if (s[i] == 'T' and s[i+1] == 'T') {
    	        AT++;
    	    } else if (s[i] == 'C' and s[i+1] == 'C') {
    	        CG++;
    	    } else if (s[i] == 'G' and s[i+1] == 'G') {
    	        CG++;
    	    } 
    	}
    	if (AT > CG * 3) {
    	    return false;
    	}
	}
	return true;
}	

void Cell::jahesh_big(string s1, int n, string s2, int m) {
	chromosomes[n].jahesh_big("DNA", s1, s2);
	chromosomes[m].jahesh_big("DNA", s2, s1);
}

void Cell::jahesh_small(char first, char second, int n, int m) {
	chromosomes[n].jahesh_small("DNA", first, second, 1);
	chromosomes[m].jahesh_small("DNA", second, first, 1);
}

void Cell::jahesh_reverse(string rev, int n) {
	chromosomes[n].jahesh_reverse("DNA", rev);
}

void Cell::palindrome(int n) {
	string s = chromosomes[n].get("DNA");
	for (int i = 0; i < s.size(); i++) {
		for (int j = 2; j+i <= s.size(); j++) {
			if (
				is_palindrome(s.substr(i, j))
			) {
				cout << s << '\n';
			}
		}
	}
}