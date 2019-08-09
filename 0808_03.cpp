#include "stdafx.h"
class CPerson
{
public:
	void Thinking()
	{
		cout << "생각한다 고로 존재한다" << endl; 
	}
protected:
	int m_iage;
	int m_iKey;

};
//		클래스 명 : 접근지정자 부모클래스 명
class CStudent : public CPerson
{
public:
	void Render()
	{
		cout << m_iage << endl; 

	}
};
void main()
{	
	/*
	기존 정의된 클래스가 가지고 있는 멤버들을 공통으로 요하는 타 클래스에게 물려줄수 있다.
	이때 물려주는 쪽을 base, 부모, 슈퍼, 상위 클래스라 하고
	물려 받는 쪽을 자식, derived(파생), 서브, 하위 클래스라 칭한다.
	*/
}