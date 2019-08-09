#include "stdafx.h"

class CCopy
{
public:
	CCopy() 
	{}
	CCopy(char* pName)
	{
		int iSize = strlen(pName) + 1;
		m_pName = new char[iSize];
		strcpy_s(m_pName, iSize, pName);
		cout << "문자열 받는 인자있는 생성자" << endl; 
	}
	// 이것이 바로 얕은 복사. - 얕은 복사의 문제점은 단순 값 대입이 일어나기 때문에 같은 공간을 바라보는 일이 발생 한다. 
	// 지금 예제는 지울때 터지는 현상이 발생. 
// 	CCopy(CCopy& rObj)
// 	{
// 		m_pName = rObj.m_pName;
// 		cout << "복사 생성자" << endl; 
// 	}
	// 깊은 복사로 문제를 해결 하자. - 서로 바라보는 공간을 달리 해주면 문제를 해결 할 수 있다. 
	CCopy(CCopy& rObj)
	{
		int iSize = strlen(rObj.m_pName) + 1;
		m_pName = new char[iSize];
		strcpy_s(m_pName, iSize, rObj.m_pName);
		cout << "복사 생성자" << endl;
	}

	~CCopy() 
	{
		if (m_pName) 
		{
			delete[] m_pName;
			m_pName = nullptr;
		}
		cout << "소멸자" << endl; 
	}

public:
	void Render()
	{
		cout << m_pName << endl; 
	}
private:
	char* m_pName;
};
class CTest
{
public:
	CTest() {}; 
	~CTest() {}; 
	CTest(CTest& rTest)
	{
		cout << "복사생성자 호출!" << endl; 
	}
	void Render()
	{
		cout << "dd" << endl; 
	}
};
//			CCopy Copy(tTest) == CCopy tTest2(tTest);
void Render(CTest tTest)
{
	tTest.Render();
}
CTest RenderTest()
{
	CTest Test; 
	return Test;
}
void main()
{
// 	CCopy tTest("Jusin");
// 	tTest.Render(); 
// 	CCopy tTest2(tTest);
// 	tTest2.Render(); 

	//복사 생성자가 호출되는 3가지 시점. 
	//1. 객체를 생성 할 때 먼저 생성된 객체를 생성자에 넣어줄때 . ex)CCopy tTest2(tTest);
	//2. 함수의 인자를 call by value 형식으로 대입 받을대 . 
	CTest Test;
	Render(Test);
	//3. 함수의 반환값을 callbyvalue 형식으로 반환 할때. 
	Test = RenderTest();
}