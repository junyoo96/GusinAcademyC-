#include <iostream>

void PlusOne(int* ptr_)
{
	std::cout << ptr_ << std::endl;
	//이거는 ptr_이 가지고 있던 주소값을 옮긴 것, 포인터의 크기(4byte)만큼 움직임, 0x100-> 0x104
	++(ptr_);
	//값을 바꾸려면
	++(*ptr_);
}

int main(void)
{
	//포인터 초기화, 초기화 안해주면 쓰레기값
	short* pShort = nullptr;
	int* pInt = nullptr;
	double* pDouble = nullptr;

	//32bit환경(메모리에서 주소값을 저장할 수 있는 크기)에서는 포인터변수 크기 4byte
	//64bit환경 - 8byte
	std::cout << sizeof(pShort) << std::endl;
	std::cout << sizeof(pInt) << std::endl;
	std::cout << sizeof(pDouble) << std::endl;

	int a = 0 , b = 0, c = 0;
	//자료형 앞에 붙으면 : 값에 접근해서 변경 불가
	const int* ptr = &a;
	//변수 앞에 붙으면 : 변수에 저장된 주소값 변경불가
	int* const ptr2 = &b;
	//둘다 붙으면 : 둘다 불가
	const int* const ptr3 = &c;

	int input = 0;
	PlusOne(&a); // Call by reference : 참조에 의한 함수 호출
	//PlusOne(a); //  Call by value : 값복사에 의한 함수 호출

	//더블포인터 : 포인터 변수의 주소값을 가리키는 포인터 
	int a = 10;
	int* ptr = *a;
	int** pptr = &ptr;
	//pptr이 최종적으로 가리키는 값 
	std::cout << **pptr << std::endl;
}