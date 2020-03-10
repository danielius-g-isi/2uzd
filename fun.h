#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <iomanip>
#include <algorithm>
#include <numeric>
#include <fstream>
#include <chrono>

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

struct generate {
	std::string temp_n, temp_s;
	std::vector<std::string> name, surname, name_p, name_np, surname_p, surname_np;
	std::vector<double> average, median, average_p, average_np, median_p, median_np;
	std::vector<int> grade;
	int num, hmavg, eg, temp;
	void gen(int a);
	void out();
};