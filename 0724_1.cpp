#include <iostream>	

//����ü ����
//����ü Ű���� �ڷ����� �̸�
//typedef �ڷ����� ������ �ϴ� ����(������ �ص� �Ѵ� ��밡��)
typedef int _INT;

struct INFO
{
	//�������
	char szName[32];
	int iKor;
	int iEng;
	int iMath;
	int iTotal;
	float fAver;
};

void Output(INFO tStudent)
{
	std::cout << tStudent.szName << std::endl;
}

void Input(INFO* tStudent)
{
	//�������Ѵ��� ����
	std::cin >> (*tStudent).szName;
	//������ ������ ����� �� ����� �����ϰ��� �Ѵٸ� dot�����ڰ� �ƴ϶� ȭ��ǥ ������(arrow operator)�� �������
	std::cin >> tStudent->szName;
}

void main()
{
	//����ü - ����� ���� �ڷ���
	//����ü ����
	INFO tagInfo;
	
	//����� ���ÿ� �ʱ�ȭ
	INFO tagTestInfo = {"�ں���",99,100, 20};
	
	//DOT(.)�����ڸ� �̿��Ͽ� �����Ϳ� ����
	//�����Ϳ� �����Ͽ� �а� ���� ����
	std::cout << tagTestInfo.szName << std::endl;
	std::cout << tagTestInfo.fAver << std::endl;

	//typedef
	_INT iTestInt = 0;
	iTestInt = 0;

	INFO* pInfo = nullptr;
}