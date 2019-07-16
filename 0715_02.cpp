#include <iostream>
#include <time.h>
using namespace std; 

void main()
{
	// 난수 - 랜덤한 수. 왜 필요하느냐 ? 돈벌어야지. 가챠 만들때 최소 최대 데미지 혹은 회피, 혹은 치명타, 혹은 아이템 드랍, 혹은 등등.. 
	// 생각보다 쓸데가 많네 . ㅋㅋ
	 
// 	srand(rand());// seed표를 계속 바꿔주기 위해서는 시간값이 필요. 그래서 내가 사용할것이 바로 time이라는 함수. 
// 	// 이 타임이란 함수를 사용하기 위해서는 h를 추가해줘야 한다. <time.h>
// 	int i = rand(); // 난수를 추출할때 사용하는 함수. rand()함수이다. 
// 	// 근데 중요한건 이 rand라는 함수는 seed표를 참고해서 숫자를 반환한다. 
// 	int j = rand(); 
// 	cout << i << endl; 
// 	cout << j << endl; 

	// 만약 내가 이 time이라는 함수 인자로 아무것도 넘겨주지 않는다면 1970년대 1월 1일 0시 0분 0초 부터 흐른 시간을 반환. 
	//unsigned로 형변환 한 이유는 srand라는 함수가 받는 인자가 애초에 unsigned라서 맞춰준것. 
// 	srand(unsigned(time(NULL)));
// 
// 	int irand = rand(); 
// 	int irand2 = rand(); 
// 	int irand3 = rand(); 
// 	// RAND_MAX - rand함수가 반환하는 최대값은 32767 즉 short 형의 최대값. 
// 	cout << irand << endl; 
// 	cout << irand2 << endl;
// 	cout << irand3 << endl;


	// 조금더 고른 난수를 뽑겠다고 srand를 사이사이에 넣어줬으나 이런다고 더 고른 난수가 나오는게 아니다. 
	// 시간값이 바뀌기 전에 rand에서 수를 얻어내기 때문에 다 첫번째 값을 얻어오기때문에 결과가 다 똑같다. 
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