#include "stdafx.h"

#include "ExternTest.h"
// 1. � cpp������ �������� ������ ����.
//2. ������� externŰ���� ����Ͽ� �̷� ������ �ִٶ�°� �˷� ��� ��. 

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
		return this;// this�� ����� ��ü �ڽ��� �ּҰ��� ��� �ִ� �������̴�. 
	}
private:
	int m_iTest; 
	int m_iTest2; 

};
void main()
{
	// this ������ 

// 	CTest test; 
// 	cout << &test << endl; 
// 	cout << test.Get_This() << endl; 
// 	test.Render(); 

	// extern Ű���� ���� ������ �������� �����Ϸ����� �˷��ټ� �ִ� ����. 
	//extern �� ��� �ݵ�� ���� �ݵ�� �������⼭ ���� Ȱ��Ǵ� ������ 
	// �ƴϸ� ���α׷� ����ú��� ��� �ֱ� ������ �޸� ���� �ɼ��� �ִ�. 
	

	CExternTest Test;
	g_iExtern = 10; 
	cout << &g_iExtern << endl; 
	Test.ExternTestFunc(); 


}