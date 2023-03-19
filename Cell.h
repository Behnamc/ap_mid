#pragma once
#include "Gene.h"
#include <iostream>
#include <vector>
using namespace std;

class Cell {
public:
	Cell(int n);

	bool del_chromosome();

	void jahesh_big(
		string s1, int n, string s2, int m);

	void jahesh_small(
		char first, char second, int n, int m);

	void jahesh_reverse(string rev, int n);

	void palindrome(int n);

protected:
	vector<Gene> chromosomes; // RNA = NULL
};