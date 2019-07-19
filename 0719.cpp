#include <iostream>

void PlusOne(int* ptr_)
{
	std::cout << ptr_ << std::endl;
	//�̰Ŵ� ptr_�� ������ �ִ� �ּҰ��� �ű� ��, �������� ũ��(4byte)��ŭ ������, 0x100-> 0x104
	++(ptr_);
	//���� �ٲٷ���
	++(*ptr_);
}

int main(void)
{
	//������ �ʱ�ȭ, �ʱ�ȭ �����ָ� �����Ⱚ
	short* pShort = nullptr;
	int* pInt = nullptr;
	double* pDouble = nullptr;

	//32bitȯ��(�޸𸮿��� �ּҰ��� ������ �� �ִ� ũ��)������ �����ͺ��� ũ�� 4byte
	//64bitȯ�� - 8byte
	std::cout << sizeof(pShort) << std::endl;
	std::cout << sizeof(pInt) << std::endl;
	std::cout << sizeof(pDouble) << std::endl;

	int a = 0 , b = 0, c = 0;
	//�ڷ��� �տ� ������ : ���� �����ؼ� ���� �Ұ�
	const int* ptr = &a;
	//���� �տ� ������ : ������ ����� �ּҰ� ����Ұ�
	int* const ptr2 = &b;
	//�Ѵ� ������ : �Ѵ� �Ұ�
	const int* const ptr3 = &c;

	int input = 0;
	PlusOne(&a); // Call by reference : ������ ���� �Լ� ȣ��
	//PlusOne(a); //  Call by value : �����翡 ���� �Լ� ȣ��

	//���������� : ������ ������ �ּҰ��� ����Ű�� ������ 
	int a = 10;
	int* ptr = *a;
	int** pptr = &ptr;
	//pptr�� ���������� ����Ű�� �� 
	std::cout << **pptr << std::endl;
}