#include "fun.h"

int main()
{
	srand(time(NULL));
	bool file = 0;
	grade table;
	std::cout << "Read from file? (1 for yes, 0 for no)" << '\n';
	std::cin >> file;
	if (file) table.file_input();
	else
	{
		table.input();
		table.output();
	}
}