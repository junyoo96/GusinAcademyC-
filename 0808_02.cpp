#include "stdafx.h"

#include "ExternTest.h"
// 1. 어떤 cpp에서든 전역에서 변수를 선언.
//2. 헤더에서 extern키워들 사용하영 이런 변수가 있다라는걸 알려 줘야 함. 

int g_iExtern = 0; 
class CTest
{
public:
	void Render()
	{
		this->m_iTest = 10; 
		this->m_iTest2 = 20; 
		cout << this->m_iTest << endl; 
		cout << this->m_iTest2 << endl; 

	}
public:
	CTest* Get_This()
	{
		return this;// this가 사용한 객체 자신의 주소값을 담고 있는 포인터이다. 
	}
private:
	int m_iTest; 
	int m_iTest2; 

};
void main()
{
	// this 포인터 

// 	CTest test; 
// 	cout << &test << endl; 
// 	cout << test.Get_This() << endl; 
// 	test.Render(); 

	// extern 키워드 전역 변수가 존재함을 컴파일러에게 알려줄수 있는 문법. 
	//extern 의 경우 반드시 정말 반드시 여기저기서 자주 활용되는 변수만 
	// 아니면 프로그램 실행시부터 살아 있기 때문에 메모리 낭비가 될수도 있다. 
	

	CExternTest Test;
	g_iExtern = 10; 
	cout << &g_iExtern << endl; 
	Test.ExternTestFunc(); 


}