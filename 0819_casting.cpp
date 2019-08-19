#include "stdafx.h"
#include <iostream>

class CObj
{
public:
	virtual void Render()
	{
		std::cout << "부모의 " << std::endl;
	}
};
class CPlayer : public CObj
{
public:
	virtual void Render()
	{
		std::cout << "CPlayer의 " << std::endl;
	}
};
class CSubPlayer :public CPlayer
{
public:
	//std::cout << "SubPlayer의" << std::endl;
};
class CMonster : public CObj
{
public:
	virtual void Render()
	{
		std::cout << "CMonster의 " << std::endl;
	}
};
class CStudent
{
public:
	
};
class CStudent2
{
public:
};

void main()
{
	//캐스팅 연산자

	//C스타일 캐스팅 연산자
	int iNum = 3.14;
	int iNum2 = (int)3.14;
	int iNum3 = int(3.14);

	//C++ 스타일의 캐스팅 연산자
	//static_cast<>()
	//static_cast</*자료형을 명시*/>(/*형변환 하고자 하는 대상*/)	
	iNum2 = static_cast<int>(3.14);
	CStudent tStudent;
	//static_cast는 객체의 형변환에서 "컴파일 시" 상속관계의 유무(누가 부모인지 자식인지 상관없이 단지 상속관계인지만)도 확인하기 때문에 논리적 캐스팅이라고도 함 , C스타일은 확인안함
	CObj* pStu = static_cast<CObj*>(&tStudent);

	CObj obj;
	//단순 상속 유무만 판단하기 때문에 위험한 캐스팅이 되어버림(자식에 부모를 대입해도 컴파일 성공함)
	CPlayer* pPlayer = static_cast<CPlayer*>(&obj);
	//부모를 자식에 대입할 수는 없음
	pPlayer = (&obj);
	//virtual선언 했음에도 부모클래스의 함수 호출됨
	//pObj->Render();

	//이를 해결하기 위해 dynamic_cast를 사용
	//Runtime시, 상속관계의 유무 판단하고, 문법상 위험한 경우에 dynamic_cast는 nullptr을 반환
	CObj obj;
	CPlayer* pObj = dynamic_cast<CPlayer*>(&obj);
	pObj->Render();


}