#include <iostream>
typedef struct tagStudent
{
	int a;
	int b;
	int c;
}TEST;

int* CreateBuffer(int* ptr)
{
	int iSize = 0;
	std::cout << "�л��� �Է� : ";
	std::cin >> iSize;
	ptr = new int[iSize];
	return ptr;
}

void main()
{
	//C++ ��Ÿ���� �����Ҵ� ������
	int* ptr = new int;
	*ptr = 90;
	std::cout << *ptr << std::endl;

	TEST* pTest = new TEST;
	pTest->a = 1;
	pTest->b = 99;
	pTest->c = 999;

	std::cout << pTest->a << std::endl;

	// �����ִ� ������ delete(free�Լ��� �ٸ� �� - ���� �ּ� ������ �Ҵ� �����ϰ� ���ٸ��ϰ� ���� �ּҰ����� �����ع���!!!)
	delete ptr;
	delete pTest;

	//C������ �Ҵ� ���� �ص� ������ ���������� C++������ ���� �Ұ���(������)
	std::cout << *ptr << std::endl;

	//===========================================
	int iSize = 5;
	//�迭 ���� �Ҵ�
	int* pArr = new int[iSize/*�迭�ǰ���*/];

	for (int i = 0; i < 5; ++i)
	{
		pArr[i] = i + 1;
		std::cout << pArr[i] << std::endl;
	}

	//�迭 ���� �Ҵ� ����
	delete[] pArr;

	//===========================
	int* pStudent = nullptr;
	//���ڷ� nullptr�� ���� ���� �Լ��� �Ű����� �����ʹ� �׳� �ƹ��� �ּҵ� ����Ű�� �ʴ� ����������
	pStudent = CreateBuffer(pStudent);
	
	int* address = nullptr;

	for (int i = 0; i < 5; ++i)
	{
		pStudent[i] = i + 1;
		std::cout << pStudent[i] << std::endl;
	}


	address = &pStudent[1];
	std::cout << address << std::endl;
	
	delete[] pStudent;
	//
	//delete�� delete[]�� ������
	//delete�� pStudent[0]�� ���� �Ҹ���ȣ�� �� �޸� ������ �̷���� - memory leak�Ͼ , �迭�� delete�� �����ϸ� ������ �Ҹ��� ȣ��ȵǰ� ����
	//delete[]�� pStudent�迭�� ���� �Ҹ��ڵ� ȣ�� �޸� ��� ����

	std::cout << address << std::endl;
	std::cout << *address << std::endl;

	//================================================
	//�޸��Լ�
	//�޸𸮴� �޸� ������ �ʱ�ȭ Ȥ�� ���� �ϴ� �Լ�
	
	//memset(/*1.�ʱ�ȭ �ϰ��� �ϴ� ����� �ּ�, 2. ä�� ���� ��, 3. �󸶸�ŭ�� size�� �ʱ�ȭ �Ұ���*/)//�޸� �ʱ�ȭ ���ִ� �Լ�
	int iPoint;
	//1byte�� ä�� ���� ��(������ 1)���� �ʱ�ȭ ��Ŵ
	//���ӵ� �޸� ������ 0���� �ʱ�ȭ �� �� �����- �迭 �ʱ�ȭ, ����ü �ʱ�ȭ ��..
	memset(&iPoint, 1, sizeof(int));

}