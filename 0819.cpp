// 0819.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

//
class CObj
{
public:
	CObj(){}
	//virtual 키워드는 자식에게 붙이지 않아도 부모의 virtual선언을 상속함
	//자식에게도 붙이는 이유는 가독성을 위해
	virtual ~CObj(){}
};

class CPlayer : public CObj
{
public:
	CPlayer(){}
	virtual ~CPlayer(){}
};

int main()
{
    //동적 할당시 가상소멸자가 없을 경우 문제점은
	//객체 포인터를 기준으로 하기 때문에 자식의 소멸자를 호출하지 않음
	//그렇기 때문에 소멸자 앞에 virtual 키워드를 붙여 가상 소멸자를 만들어줌
	//가상소멸자라 해서 함수 오버라이딩이 아님. 애초에 함수 오버라이딩 조건(이름 등)이 충족이 안됨
	//
	CObj* pPlayer = new CPlayer;
	delete pPlayer;
	return 0;
}

