#include <iostream>
#include <time.h>
using namespace std; 

void main()
{
	// ���� - ������ ��. �� �ʿ��ϴ��� ? ���������. ��í ���鶧 �ּ� �ִ� ������ Ȥ�� ȸ��, Ȥ�� ġ��Ÿ, Ȥ�� ������ ���, Ȥ�� ���.. 
	// �������� ������ ���� . ����
	 
// 	srand(rand());// seedǥ�� ��� �ٲ��ֱ� ���ؼ��� �ð����� �ʿ�. �׷��� ���� ����Ұ��� �ٷ� time�̶�� �Լ�. 
// 	// �� Ÿ���̶� �Լ��� ����ϱ� ���ؼ��� h�� �߰������ �Ѵ�. <time.h>
// 	int i = rand(); // ������ �����Ҷ� ����ϴ� �Լ�. rand()�Լ��̴�. 
// 	// �ٵ� �߿��Ѱ� �� rand��� �Լ��� seedǥ�� �����ؼ� ���ڸ� ��ȯ�Ѵ�. 
// 	int j = rand(); 
// 	cout << i << endl; 
// 	cout << j << endl; 

	// ���� ���� �� time�̶�� �Լ� ���ڷ� �ƹ��͵� �Ѱ����� �ʴ´ٸ� 1970��� 1�� 1�� 0�� 0�� 0�� ���� �帥 �ð��� ��ȯ. 
	//unsigned�� ����ȯ �� ������ srand��� �Լ��� �޴� ���ڰ� ���ʿ� unsigned�� �����ذ�. 
// 	srand(unsigned(time(NULL)));
// 
// 	int irand = rand(); 
// 	int irand2 = rand(); 
// 	int irand3 = rand(); 
// 	// RAND_MAX - rand�Լ��� ��ȯ�ϴ� �ִ밪�� 32767 �� short ���� �ִ밪. 
// 	cout << irand << endl; 
// 	cout << irand2 << endl;
// 	cout << irand3 << endl;


	// ���ݴ� �� ������ �̰ڴٰ� srand�� ���̻��̿� �־������� �̷��ٰ� �� �� ������ �����°� �ƴϴ�. 
	// �ð����� �ٲ�� ���� rand���� ���� ���� ������ �� ù��° ���� �����⶧���� ����� �� �Ȱ���. 
// 	srand(unsigned(time(NULL)));
// 	int irand = rand();
// 	srand(unsigned(time(NULL)));
// 	int irand2 = rand();
// 	srand(unsigned(time(NULL)));
// 	int irand3 = rand();
// 	cout << irand << endl;
// 	cout << irand2 << endl;
// 	cout << irand3 << endl;

// 	srand(unsigned(time(NULL)));
// 	int irand = rand() % 100 ; // 0 ~ 99
// 	int irand2 = (rand() % 100) + 1; // 1 ~ 100
// 	int irand3 = (rand() % 100 ) + 400; // 400 ~ 499
// 	int irand4 = rand(); // 0~ 32767 
// 	cout << irand << endl;
// 	cout << irand2 << endl;
// 	cout << irand3 << endl;
}