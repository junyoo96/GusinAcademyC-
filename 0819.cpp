// 0819.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

//
class CObj
{
public:
	CObj(){}
	//virtual Ű����� �ڽĿ��� ������ �ʾƵ� �θ��� virtual������ �����
	//�ڽĿ��Ե� ���̴� ������ �������� ����
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
    //���� �Ҵ�� ����Ҹ��ڰ� ���� ��� ��������
	//��ü �����͸� �������� �ϱ� ������ �ڽ��� �Ҹ��ڸ� ȣ������ ����
	//�׷��� ������ �Ҹ��� �տ� virtual Ű���带 �ٿ� ���� �Ҹ��ڸ� �������
	//����Ҹ��ڶ� �ؼ� �Լ� �������̵��� �ƴ�. ���ʿ� �Լ� �������̵� ����(�̸� ��)�� ������ �ȵ�
	//
	CObj* pPlayer = new CPlayer;
	delete pPlayer;
	return 0;
}

