#include <iostream>
using namespace std; 
void TestString(char* pName, char* pSource)
{
	strcpy_s(pName, strlen(pSource) + 1 ,pSource);
	// ������� ���� �迭�� ũ�⸦ �Ѿ�� �ȵǸ� ������ ���ڿ��� ���̺��� �۾������� �ȵȴ�.
	//strcpy_s(pName, strlen(pSource) + 100, pSource);
}
void main()
{
	//���ڿ� ���� �Լ�. 
	//strlen ������ ���̹�ȯ�Լ�. 
// 	char szName[16] = "ParkByoungGeon";
// 	cout << strlen(szName) << endl; // null���ڸ� ������ ���� ���ڿ��� ���̸� ��ȯ �Ѵ�. 
// 	cout << sizeof(szName) << endl;// ���� �迭�� �� ũ�⸦ ��ȯ�Ѵ�. 
// 
// 	 // strcpy_s(1. ���� ���� ���ڿ�, 2.���� �� ���ڿ�)
// 	 // �Լ� �����ε� �Ǿ� ���� ����� ����ϴµ� 
// 	// �Ѵ� ������ �����϶� ����� ����� ��� �Ѵ�. 
// 	strcpy_s(szName, "Apple");
// 	//strcpy_s(szName, 6, "Apple1");
// 	
// 	TestString(szName, "YoungMon");
// 	cout << szName << endl;

	// strcat_s() 1.������ ���, 2.������ ���ڿ� 
// 	char szJusin[16] = "Jusin111111";
// 	char* pGame = "Game";
// 	strcat_s(szJusin, pGame);
// 
// 	cout << szJusin << endl; 

	//strcmp 1.���� ���ڿ�, 2.���� ���ڿ�2, ��ȯ���� ���ڿ��� �Ȱ��� ��� 0����ȯ 
	//���� �ٸ� ��� �׿� �ٸ��� ��ȯ. 
	// �׷��� �տ� !�����ڸ� �ٿ����. 
// 	char szName[16] = "�ں���"; 
// 	if (!strcmp("�ں���", "�ں���"))
// 		cout << "���ڰ� �Ȱ���!" << endl; 


}