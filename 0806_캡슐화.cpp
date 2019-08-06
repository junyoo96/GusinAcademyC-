#include "stdafx.h"

class Sorethroat
{
public:
	void take()
	{
		std::cout << "목감기 완치" << std::endl;
	}
};

class Sinuscold
{
public:
	void take()
	{
		std::cout << "코감기 완치" << std::endl;
	}
};

class Headache
{
public:
	void take()
	{
		std::cout << "두통 완치" << std::endl;
	}
};

class Coldpill
{
public:
	void take()
	{
		sorethroat.take();
		sinuscold.take();
		headache.take();
	}
private:
	Sorethroat sorethroat;
	Sinuscold sinuscold;
	Headache headache;
};

void main()
{
	Coldpill coldpill;
	coldpill.take();
}