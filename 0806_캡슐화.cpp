#include "stdafx.h"

class Sorethroat
{
public:
	void take()
	{
		std::cout << "�񰨱� ��ġ" << std::endl;
	}
};

class Sinuscold
{
public:
	void take()
	{
		std::cout << "�ڰ��� ��ġ" << std::endl;
	}
};

class Headache
{
public:
	void take()
	{
		std::cout << "���� ��ġ" << std::endl;
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