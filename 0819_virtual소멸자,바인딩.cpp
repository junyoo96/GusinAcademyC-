#include "stdafx.h"

class CObj
{
public:
	//순수 가상함수 : 자식에게 반드시 오버라이딩하게끔 만드는 문법
	//몸체가 없다는 것을 =0으로 표현
	//순수가상함수를 단 하나라도 정의한다면 이 클래스는 추상클래스라고 불림(객체 생성이 불가함)
	//virtual void Update() = 0;

	virtual void Render()
	{
		std::cout << "부모의 렌더" << std::endl;
	}
};
class CPlayer : public CObj
{
public:
	virtual void Update()
	{
		std::cout << "dd" << std::endl;
	}
	virtual void Render()
	{
		std::cout << "자식의 렌더 " << std::endl;
	}
};

void main()
{
	//가상함수의 동작 원리
	//Virtual pointer, Virtual Table : 만약 클래스 내부에 단 하나라도 가상함수가 존재한다면 컴파일러는 Virtual pointer, Virtual Table을 만듬	
	//그리고 Virtual Table에는 실제로 호출되어야 할 함수의 위치 정보를 담고 있음

	//아무것도 없을 때 Class의 크기는 1byte이지만
	//virtual선언이 된 함수가 있을경우 4byte가 됨
	std::cout << sizeof(CPlayer) << std::endl;
	
	//그 이유는 CPlayer가 virtual pointer(4byte)를 갖게 되기 때문에 그럼
	//pPlayer가 가리키는 것이 virtual pointer이고, 이 virtual pointer는 virtual table(virtual선언된 함수들이 있는곳)을 가리키게됨
	//이후, runtime시점에서 실제 가리키고 있는 객체에 따라 virtual함수를 호출하게됨
	CObj* pPlayer = new CPlayer;
	pPlayer->Render();
	
	//추상클래스라 객체 생성불가, 객체 포인터 형식은 사용가능
	//CObj obj;  ,  CObj obj=new CObj; (X)
	//CObj* obj; (O)

	//Binding(바인딩)
	//프로그램의 구성요소의 성격을 결정해주는 것
	//예를 들어, 함수를 실행하려면 함수의 호출 위치와 함수가 위치한 메모리 번지가 연결되어야함
	//이 둘을, 연결시키는 것이 바인딩

	//정적 바인딩 - 컴파일 시점에서 이미 구성요소의 성격이 결정되는 것을 의미
	//동적 바인딩 - runtime 시점에서 구성요소의 성격을 결정 ex)대표적인 예가 함수 오버라이딩
	
}