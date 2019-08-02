// 0802.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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

//참조자에 const키워드를 붙이면 상수도 저장가능(이 때, 저장되는 상수는 임시변수로 생성되서 참조자에 저장됨)

int Add(const int& a,const int& b)
{
	return a + b;
}


int main()
{

	//Reference - 직접 참조에 속함
	//C++부터 나온 문법	
	//레퍼런스 선언
	//변수엔 이름을 하나 더 붙이는 것
	int* ptr = nullptr;
	int iTest = 0;
	int iTest2 = 0;

	//참조할 때 포인터와의 차이
	
	ptr = &iTest;
	//한번 참조하면 참조하는 대상을 바꿀 수 없음!!
	//참조자에는 주소값이 할당안됨(따라서, 변수가 아님)
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

	//인자로 들어가며 생성된 임시변수는 함수가 종료되면 소멸됨 
	Add(30, 50);

    return 0;
}

