#include "stdafx.h"
#include <iostream>

class CObj
{
public:
	virtual void Render()
	{
		std::cout << "�θ��� " << std::endl;
	}
};
class CPlayer : public CObj
{
public:
	virtual void Render()
	{
		std::cout << "CPlayer�� " << std::endl;
	}
};
class CSubPlayer :public CPlayer
{
public:
	//std::cout << "SubPlayer��" << std::endl;
};
class CMonster : public CObj
{
public:
	virtual void Render()
	{
		std::cout << "CMonster�� " << std::endl;
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
	//ĳ���� ������

	//C��Ÿ�� ĳ���� ������
	int iNum = 3.14;
	int iNum2 = (int)3.14;
	int iNum3 = int(3.14);

	//C++ ��Ÿ���� ĳ���� ������
	//static_cast<>()
	//static_cast</*�ڷ����� ���*/>(/*����ȯ �ϰ��� �ϴ� ���*/)	
	iNum2 = static_cast<int>(3.14);
	CStudent tStudent;
	//static_cast�� ��ü�� ����ȯ���� "������ ��" ��Ӱ����� ����(���� �θ����� �ڽ����� ������� ���� ��Ӱ���������)�� Ȯ���ϱ� ������ ���� ĳ�����̶�� �� , C��Ÿ���� Ȯ�ξ���
	CObj* pStu = static_cast<CObj*>(&tStudent);

	CObj obj;
	//�ܼ� ��� ������ �Ǵ��ϱ� ������ ������ ĳ������ �Ǿ����(�ڽĿ� �θ� �����ص� ������ ������)
	CPlayer* pPlayer = static_cast<CPlayer*>(&obj);
	//�θ� �ڽĿ� ������ ���� ����
	pPlayer = (&obj);
	//virtual���� �������� �θ�Ŭ������ �Լ� ȣ���
	//pObj->Render();

	//�̸� �ذ��ϱ� ���� dynamic_cast�� ���
	//Runtime��, ��Ӱ����� ���� �Ǵ��ϰ�, ������ ������ ��쿡 dynamic_cast�� nullptr�� ��ȯ
	CObj obj;
	CPlayer* pObj = dynamic_cast<CPlayer*>(&obj);
	pObj->Render();


}