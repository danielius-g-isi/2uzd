#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <iomanip>
#include <algorithm>
#include <numeric>
#include <fstream>

const int N = 50;

struct grade {
	std::vector<int> hm;
	int egz = 0, temp = 0, total = 0, medn;
	double avg[N], med[N], hmavg = 0;
	std::string name[N], surname[N];
	bool average = 1;
	void input();
	void output();
	void file_input();
};