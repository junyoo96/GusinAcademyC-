#include<iostream>

//�� �Լ��ȿ��� �迭�� ���̸� �� �� ����, �迭�� ���̸� �˷��� �Ű������� �Ѱ��־����
//������ ������ sizeof�� �迭 ���̸� ����, ptr[]�� �迭�� �̸��� �ƴ϶�
void Test2(int ptr[], int iSize_)
{
	
}

void main()
{
	int iArr[3] = { 1,2,3 };
	//�迭�� ������ ����ؼ� ��ȯ
	Test2(iArr, sizeof(iArr) / sizeof(int));
}