#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <iomanip>
#include <algorithm>

const int N = 50;

struct grade {
	std::vector<int> hm;
	int egz = 0, temp = 0, total = 0, medn;
	double avg[N], med[N], hmavg = 0;
	std::string name[N], surname[N];
	bool average = 1;
	void input()
	{
		for (int i = 0; i < N; i++)
		{
			std::cout << "Name? (\"stop\" to stop)" << '\n'; std::cin >> name[i];
			if (name[i] == "stop") break;
			std::cout << "Surname?" << '\n'; std::cin >> surname[i];
			std::cout << "Homework grades? (\"11\" to stop, \"12\" for random)" << '\n'; std::cin >> temp;
			while (temp < 1 || temp > 12)
			{
				std::cout << "Grades must be from 1 to 10" << '\n';
				std::cin >> temp;
			}
			if (temp == 11) hmavg = 0;
			else
			{
				while (temp != 11 && temp != 12)
				{
					hm.push_back(temp);
					std::cin >> temp;
					while (temp < 1 || temp > 12)
					{
						std::cout << "Grades must be from 1 to 10" << '\n';
						std::cin >> temp;
					}
				}
				if (temp == 12)
				{
					int rng = rand() % 10 + 1;
					for (int j = 0; j < rng; j++) hm.push_back(rand() % 10 + 1);
				}
				for (int m = 0; m < hm.size(); m++)
				{
					hmavg += hm[m];
				}
				hmavg /= hm.size();
			}
			std::cout << "Exam grade? (\"12\" for random)" << '\n'; std::cin >> egz;
			if (egz == 12) egz = rand() % 10 + 1;
			avg[i] = hmavg * 0.4 + egz * 0.6;
			std::sort(hm.begin(), hm.end());
			if (hm.size() % 2 != 0) med[i] = hm[hm.size() / 2];
			else med[i] = (double) (hm[(hm.size() / 2) - 1] + hm[hm.size() / 2]) / 2;
			total++;
		}
		std::cout << "1 for average, 0 for median" << '\n'; std::cin >> average;
	}
	void output()
	{
		if (average)
		{
			std::cout << std::left << std::setw(15) << "Name" << std::left << std::setw(15) << "Surname" << std::left << std::setw(15) << "Average" << '\n';
			for (int i = 0; i < total; i++)
			{
				std::cout << std::left << std::setw(15) << name[i] << std::left << std::setw(15) << surname[i] << std::left << std::setw(15) << std::setprecision(2) << avg[i] << '\n';
			}
		}
		else
		{
			std::cout << std::left << std::setw(15) << "Name" << std::left << std::setw(15) << "Surname" << std::left << std::setw(15) << "Median" << '\n';
			for (int i = 0; i < total; i++)
			{
				std::cout << std::left << std::setw(15) << name[i] << std::left << std::setw(15) << surname[i] << std::left << std::setw(15) << std::setprecision(2) << med[i] << '\n';
			}
		}
	}
};

int main()
{
	srand(time(NULL));
	grade table;
	table.input();
	table.output();
}