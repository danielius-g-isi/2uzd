#include "fun.h"

void grade::input()
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
			hmavg = std::accumulate(hm.begin(), hm.end(), 0) / hm.size();
		}
		std::cout << "Exam grade? (\"12\" for random)" << '\n'; std::cin >> egz;
		while (egz < 0 || egz > 12 || egz == 11)
		{
			std::cout << "Grades must be from 1 to 10" << '\n';
			std::cin >> egz;
		}
		if (egz == 12) egz = rand() % 10 + 1;
		avg[i] = hmavg * 0.4 + egz * 0.6;
		hm.push_back(egz);
		std::sort(hm.begin(), hm.end());
		if (hm.size() % 2 != 0) med[i] = hm[hm.size() / 2];
		else med[i] = (hm[(hm.size() / 2) - 1] + hm[hm.size() / 2]) / 2;
		while (hm.size() > 0) hm.pop_back();
		total++;
	}
	std::cout << "1 for average, 0 for median" << '\n'; std::cin >> average;
}
void grade::output()
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
void grade::file_input()
{
	std::string name, surname;
	std::vector<int> gr;
	int temp, egz;
	double avg, med, hmavg = 0;
	std::ifstream fd("stud.txt");
	if (fd.fail())
	{
		std::cout << "Read from file failed";
	}
	fd.ignore(256, '\n');
	std::cout << std::left << std::setw(15) << "Name" << std::left << std::setw(15) << "Surname" << std::left << std::setw(15) << "Average" << std::left << std::setw(15) << "Median" << '\n';
	while (!fd.eof())
	{
		fd >> name >> surname;
		while (fd.get() != '\n' && fd.get() != -1)
		{
			fd >> temp;
			gr.push_back(temp);
		}
		egz = gr[gr.size() - 1];
		hmavg = std::accumulate(gr.begin(), gr.end() - 1, 0) / gr.size();
		std::sort(gr.begin(), gr.end());
		if (gr.size() % 2 != 0) med = gr[gr.size() / 2];
		else med = (gr[(gr.size() / 2) - 1] + gr[gr.size() / 2]) / 2;
		avg = hmavg * 0.4 + egz * 0.6;
		while (gr.size() > 0) gr.pop_back();
		std::cout << std::left << std::setw(15) << name << std::left << std::setw(15) << surname << std::left << std::setw(15) << std::setprecision(2) << avg << std::left << std::setw(15) << std::setprecision(2) << med << '\n';
	}
}