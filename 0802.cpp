// 0802.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

void Swap(int& a, int& b)
{
	int iTemp = a;
	a = b;
	b = iTemp;
}
void CreatePlayer(int*& pPl)
{
	pPl = new int;
	*pPl = 20;
}

//�����ڿ� constŰ���带 ���̸� ����� ���尡��(�� ��, ����Ǵ� ����� �ӽú����� �����Ǽ� �����ڿ� �����)

int Add(const int& a,const int& b)
{
	return a + b;
}


int main()
{

	//Reference - ���� ������ ����
	//C++���� ���� ����	
	//���۷��� ����
	//������ �̸��� �ϳ� �� ���̴� ��
	int* ptr = nullptr;
	int iTest = 0;
	int iTest2 = 0;

	//������ �� �����Ϳ��� ����
	
	ptr = &iTest;
	//�ѹ� �����ϸ� �����ϴ� ����� �ٲ� �� ����!!
	//�����ڿ��� �ּҰ��� �Ҵ�ȵ�(����, ������ �ƴ�)
	int& rInt = iTest;

	*ptr = 10;
	std::cout << iTest << std::endl;

	rInt = 20;
	std::cout << iTest << std::endl;

	ptr = &iTest2;
	rInt = iTest2;
	rInt = 99;
	std::cout << iTest2 << std::endl;

	std::cout << &iTest << std::endl;

	//���ڷ� ���� ������ �ӽú����� �Լ��� ����Ǹ� �Ҹ�� 
	Add(30, 50);

    return 0;
}

