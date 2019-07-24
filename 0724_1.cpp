#include <iostream>	

//구조체 정의
//구조체 키워드 자료형의 이름
//typedef 자료형을 재정의 하는 문법(재정의 해도 둘다 사용가능)
typedef int _INT;

struct INFO
{
	//멤버변수
	char szName[32];
	int iKor;
	int iEng;
	int iMath;
	int iTotal;
	float fAver;
};

void Output(INFO tStudent)
{
	std::cout << tStudent.szName << std::endl;
}

void Input(INFO* tStudent)
{
	//역참조한다음 연산
	std::cin >> (*tStudent).szName;
	//포인터 변수를 사용할 때 멤버에 접근하고자 한다면 dot연산자가 아니라 화살표 연산자(arrow operator)를 사용하자
	std::cin >> tStudent->szName;
}

void main()
{
	//구조체 - 사용자 정의 자료형
	//구조체 선언
	INFO tagInfo;
	
	//선언과 동시에 초기화
	INFO tagTestInfo = {"박병건",99,100, 20};
	
	//DOT(.)연산자를 이용하여 데이터에 접근
	//데이터에 접근하여 읽고 쓰기 가능
	std::cout << tagTestInfo.szName << std::endl;
	std::cout << tagTestInfo.fAver << std::endl;

	//typedef
	_INT iTestInt = 0;
	iTestInt = 0;

	INFO* pInfo = nullptr;
}