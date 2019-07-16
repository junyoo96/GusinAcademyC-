#include <iostream>

int main(void)
{
	for (int i = 1; i <= 5; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}

	std::cout << "======================" << std::endl;

	for (int i = 1; i<=5; ++i)
	{
		for (int j = 5; j >= i; --j)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}



	return 0;
}