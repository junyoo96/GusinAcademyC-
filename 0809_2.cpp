#include "stdafx.h"

class Monster
{
public:
	//virtual 선언 : 자식클래스가 오버라이딩한 함수를 호출함
	virtual void Attack()
	{
		std::cout << "Monster의 공격" << std::endl;
	}
};

class Zergling : public Monster
{
public:
	//부모클래스의 virtual함수를 오버라이딩하면 알아서 자동으로 virtual 함수로 정의됨
	//하지만, 헷갈리기 때문에 자식클래스에서 명시를 해줌
	virtual void Attack()
	{
		std::cout << "Zergling의 공격" << std::endl;
	}
};

void main()
{
	//객체 포인터
	/*
	객체의 주소를 저장하는 포인터 변수
	C++에서는 부모의 객체 포인터 형식으로 부모를 직,간접적으로 상속받는 객체의 주소를 담음
	단 부모타입으로 자식의 것을 사용할 수 없음!!
	객체 포인터 연산시 기본적으로 컴파일러는 객체 포인터 타입으로 판단함 
	*/


	//=============================================

	//함수 오버라이딩 ( 재정의 ) 
	/*
	함수 오버라이딩이라는 것은 상속 문법, 부모의 멤버함수의 이름과 인자 갯수, 인자타입이 완벽하게 똑같은 함수를 자식에게도 선언 하는 것
	함수 오버로딩- C++ 문법
	함수 오버라이딩 - 상속에서 사용하는 문법
	*/
	/*
	Monster* monster=new Zergling;
	monster->Attack(); //부모 Render함수 호출, 컴파일러는 객체 포인터 타입으로 판단하기 때문에

	*/

	//==============================================
	
	//Virtual 선언
	Monster* monster = new Zergling;
	monster->Attack(); //자식클래스의 함수 호출

	//Virtual선언 했을 때 부모클래스 함수 호출하고 싶으면 // 근데 굳이..?
	monster->Monster::Attack();

	//과제 
	//1.상속 사용하면서 textrpg구현(주인공,몬스터,던전)

}