#include <iostream>
//=======================================
//�迭 �Լ� ���� �ѱ�⿡�� 2���� ����� ����


//1.
void Show(int* ptr)
{
	for (int i = 0; i < 5; ++i)
	{
		std::cout << ptr[i] << std::endl;
	}

}

//2.
//�����ε� �ȵ�(�Ȱ��� �ɷ� �޾Ƶ��� ���� �Լ��ϰ�)
void Show(int ptr[])
{
	for (int i = 0; i < 5; ++i)
	{
		std::cout << ptr[i] << std::endl;
	}

}



void main()
{
	int iArr[5] = { 1,2,3,4,5 };
	Show(iArr);

	//2�����迭
	int iArr2D[2][3] = {
		{ 1,2,3 },
		{ 4,5,6 }
	};

	//int iArr2D[��][��]
	//int iArr2D[y][x]

	//�׸����� �����ϸ� �ɵ�
	//���� 2�����迭 5�� �����ϴ� ��� 
	std::cout << *(*(iArr2D + 1) + 1) << std::endl;
	std::cout << *((*iArr2D + 4)) << std::endl;
}