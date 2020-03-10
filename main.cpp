#include "fun.h"

int main()
{
	srand(time(NULL));
	int choice;
	grade table;
	generate g;
	std::cout << "1 for manual input; 2 for file; 3 for random generation" << '\n';
	std::cin >> choice;
	while (choice < 1 || choice > 3)
	{
		std::cin >> choice;
	}
	if (choice == 1) table.file_input();
	if (choice == 2)
	{
		table.input();
		table.output();
	}
	if (choice == 3)
	{
		g.gen(1000);
		g.out();
		g.gen(10000);
		g.out();
		g.gen(100000);
		g.out();
		g.gen(1000000);
		g.out();
		g.gen(10000000);
		g.out();
	}
}