#include "stdafx.h"
class CPerson
{
public:
	void Thinking()
	{
		cout << "�����Ѵ� ��� �����Ѵ�" << endl; 
	}
protected:
	int m_iage;
	int m_iKey;

};
//		Ŭ���� �� : ���������� �θ�Ŭ���� ��
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
	���� ���ǵ� Ŭ������ ������ �ִ� ������� �������� ���ϴ� Ÿ Ŭ�������� �����ټ� �ִ�.
	�̶� �����ִ� ���� base, �θ�, ����, ���� Ŭ������ �ϰ�
	���� �޴� ���� �ڽ�, derived(�Ļ�), ����, ���� Ŭ������ Ī�Ѵ�.
	*/
}