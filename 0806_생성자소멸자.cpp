#include "stdafx.h"

class CConstructor
{
public:
	//생성자가 명시되어 있지 않으면 컴파일러가 자동으로 default생성자 만듬
	CConstructor()
	{
		std::cout << "기본 생성자" << std::endl;
	}
	//생성자가 하나라도 명시되면 컴파일러는 자동으로 생성자를 만들지 않음
	//explicit - 명시적 생성자 호출만 허용하기 위함(C스타일의 초기화 방법을 방지하기 위해)
	explicit CConstructor(int a)
	{
		std::cout << a << std::endl;
	}
	//소멸자 - 객체가 소멸할 때 호출되는 함수의 일종
	//소멸자를 만약 정의하지 않으면 알아서 생성후 호출됨
	~CConstructor()
	{
		std::cout << "소멸자" << std::endl;
	}
};

class CTest
{
public:
	void Render()
	{

	}
};

void main()
{
	//생성자 - 객체가 생성되면 자동으로 생성되고 호출이 되는 4가지 중 하나
	//클래스와 같은 이름을 띈 함수이다
	//생성자도 함수여서 오버로딩이 가능

	CConstructor tConst(10);
	/*묵시적 변환 Constructor tConst=10;  이 문장이 위에 문장으로 변환됨*/

	//C스타일 동적할당 함수와  C++스타일 동적할당 연산자의 차이점
	//C++스타일 동적할당 연산자는 생성자를 호출 , C스타일 함수는 생성자를 호출 X	

	//메모리할당-생성자호출-소멸자호출-메모리반환 순서대로 진행됨

	//============================================

	//객체 배열
	CTest TestArr[10];

	//객체 포인터 배열
	CTest* p_arr[10];
	p_arr[0] = new CTest;
}