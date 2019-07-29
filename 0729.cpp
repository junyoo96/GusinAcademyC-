#include <iostream>
typedef struct tagStudent
{
	int a;
	int b;
	int c;
}TEST;

int* CreateBuffer(int* ptr)
{
	int iSize = 0;
	std::cout << "학생수 입력 : ";
	std::cin >> iSize;
	ptr = new int[iSize];
	return ptr;
}

void main()
{
	//C++ 스타일의 동적할당 연산자
	int* ptr = new int;
	*ptr = 90;
	std::cout << *ptr << std::endl;

	TEST* pTest = new TEST;
	pTest->a = 1;
	pTest->b = 99;
	pTest->c = 999;

	std::cout << pTest->a << std::endl;

	// 지워주는 연산자 delete(free함수와 다른 점 - 원래 주소 공간을 할당 해제하고 접근못하게 랜덤 주소값으로 변경해버림!!!)
	delete ptr;
	delete pTest;

	//C에서는 할당 해제 해도 접근이 가능했지만 C++에서는 접근 불가능(에러남)
	std::cout << *ptr << std::endl;

	//===========================================
	int iSize = 5;
	//배열 동적 할당
	int* pArr = new int[iSize/*배열의갯수*/];

	for (int i = 0; i < 5; ++i)
	{
		pArr[i] = i + 1;
		std::cout << pArr[i] << std::endl;
	}

	//배열 동적 할당 해제
	delete[] pArr;

	//===========================
	int* pStudent = nullptr;
	//인자로 nullptr란 값을 받은 함수의 매개변수 포인터는 그냥 아무런 주소도 가리키지 않는 널포인터임
	pStudent = CreateBuffer(pStudent);
	
	int* address = nullptr;

	for (int i = 0; i < 5; ++i)
	{
		pStudent[i] = i + 1;
		std::cout << pStudent[i] << std::endl;
	}


	address = &pStudent[1];
	std::cout << address << std::endl;
	
	delete[] pStudent;
	//
	//delete와 delete[]의 차이점
	//delete는 pStudent[0]에 대한 소멸자호출 및 메모리 해제만 이루어짐 - memory leak일어남 , 배열을 delete로 해제하면 나머지 소멸자 호출안되고 에러
	//delete[]는 pStudent배열에 대한 소멸자들 호출 메모리 모두 해제

	std::cout << address << std::endl;
	std::cout << *address << std::endl;

	//================================================
	//메모리함수
	//메모리대 메모리 단위로 초기화 혹은 복사 하는 함수
	
	//memset(/*1.초기화 하고자 하는 대상의 주소, 2. 채워 넣을 값, 3. 얼마만큼의 size로 초기화 할건지*/)//메모리 초기화 해주는 함수
	int iPoint;
	//1byte당 채워 넣을 값(지금은 1)으로 초기화 시킴
	//연속된 메모리 공간을 0으로 초기화 할 때 사용함- 배열 초기화, 구조체 초기화 등..
	memset(&iPoint, 1, sizeof(int));

}