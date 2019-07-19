#include<iostream>

void Swap(int* a_, int* b_)
{
	*a_ ^= *b_;
	*b_ ^= *a_;
	*a_ ^= *b_;


	/*int temp = *a_;
	*a_ = *b_;
	*b_ = temp;*/
}

int main(void)
{
	int a = 3;
	int b = 2;
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	Swap(&a, &b);

	std::cout << a << std::endl;
	std::cout << b << std::endl;
}