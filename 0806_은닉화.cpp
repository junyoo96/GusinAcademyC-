// 0806.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

class CIPhone
{
	//Get�� Set�̶�� �Լ��� ����� �����͸� ������
public:
	//Get- �Լ��� �����͸� �ܺη� ������ �� ���
	//Set- �Լ��� �����͸� �ܺηκ��� �޾ƿ� �� ���
	void Init()
	{
		strcpy_s(m_szOS, sizeof(m_szOS), "IOS");
	}
	char* Get_OS()
	{
		return m_szOS;
	}
	void Set_OS(char* pOS_)
	{
		if (!strcmp(pOS_, "�ȵ���̵�"))
		{
			strcpy_s(m_szOS, sizeof(m_szOS), "IOS");
		}
		strcpy_s(m_szOS, sizeof(m_szOS), pOS_);
	}
private:
	char m_szOS[16];

};

int main()
{
	// ����ȭ : ��������� �������� �����ڸ� private���� �����μ� �ܺηκ��� ��ġ �ʴ� ������ ������ ���� ���� ����

	CIPhone tIphone;
	tIphone.Init();

	//Get�Լ�
	char* pOs = tIphone.Get_OS();
	tIphone.Set_OS("Android");
	std::cout << pOs << std::endl;

    return 0;
}

