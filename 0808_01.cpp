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
		cout << "���ڿ� �޴� �����ִ� ������" << endl; 
	}
	// �̰��� �ٷ� ���� ����. - ���� ������ �������� �ܼ� �� ������ �Ͼ�� ������ ���� ������ �ٶ󺸴� ���� �߻� �Ѵ�. 
	// ���� ������ ���ﶧ ������ ������ �߻�. 
// 	CCopy(CCopy& rObj)
// 	{
// 		m_pName = rObj.m_pName;
// 		cout << "���� ������" << endl; 
// 	}
	// ���� ����� ������ �ذ� ����. - ���� �ٶ󺸴� ������ �޸� ���ָ� ������ �ذ� �� �� �ִ�. 
	CCopy(CCopy& rObj)
	{
		int iSize = strlen(rObj.m_pName) + 1;
		m_pName = new char[iSize];
		strcpy_s(m_pName, iSize, rObj.m_pName);
		cout << "���� ������" << endl;
	}

	~CCopy() 
	{
		if (m_pName) 
		{
			delete[] m_pName;
			m_pName = nullptr;
		}
		cout << "�Ҹ���" << endl; 
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
		cout << "��������� ȣ��!" << endl; 
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

	//���� �����ڰ� ȣ��Ǵ� 3���� ����. 
	//1. ��ü�� ���� �� �� ���� ������ ��ü�� �����ڿ� �־��ٶ� . ex)CCopy tTest2(tTest);
	//2. �Լ��� ���ڸ� call by value �������� ���� ������ . 
	CTest Test;
	Render(Test);
	//3. �Լ��� ��ȯ���� callbyvalue �������� ��ȯ �Ҷ�. 
	Test = RenderTest();
}