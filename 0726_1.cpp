#include <iostream>

enum STATE
{
	IDLE
};

enum MONSTER
{
	��ũ,
	���,
	�䳢,
	�ź���,
	����,
	MONSTER_END//�̰� ���� ������ MONSTER�� ��ũ�⸦ �˱� ����
};

void main()
{
	STATE eState = IDLE;
	switch (eState)
	{
	case IDLE:
		std::cout << "�ɾ��" << std::endl;
	}
	char szMonsterName2D[MONSTER_END][64];

	//�ܼ� ��������� ������ ����ϱ� ������ ��밡��
	int iTest = IDLE;	

	//enum�� ũ��� 4byte
	std::cout << sizeof(STATE) << std::endl;

	//�ٸ� �ڷ������� �޾Ƶ鿩 ���� �Ұ�
	eState = 2;
	eState = iTest;

	//������ ����� ���������̶� ���ԺҰ�
	//eState = IDLE + ATT;
	
	iTest = IDLE + ATT;
	std::cout << iTest;
}