#include <iostream>
using namespace std;

// ��ũ�� ��� ���� 
// ��ũ�� ����� ���� �Ҷ��� �����ݷ��� ������ �ʴ´�. 
#define PI 3.141592f

#define OBJ_DEAD 1
#define OBJ_NOEVENT 0
#define OBJ_VECTORY 2
// ��ũ�θ� ����ؼ� �Լ� ���·� ��� �� ���� ����. 
// ��ũ�� �Լ�. 
#define ����(x)	 x * x 
// ��ũ�� �Լ��� ���� �̻� ǥ�� 
#define Render(RenderX)							\
cout << "�ں����� ��ũ�� �Լ��� ����!" <<endl;		\
cout << "�̰� �ɱ� �ȵɱ�? " <<endl;				\
cout << "���� ���� :" << RenderX << endl; 


void main()
{
	//��������
	// ��ũ�� ��� 
	cout << PI << endl; 

	cout << OBJ_DEAD << endl; // == cout << 1 << endl; 
	cout << ����(10) << endl;  // cout << 10 * 10 << endl; 
	Render(10)
}