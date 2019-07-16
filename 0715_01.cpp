#include <iostream>
using namespace std; 

void main()
{
//	int i = 0; 

// 	while (i < 10)
// 	{
// 		++i; 
// 		cout << i << endl; 
// 
// 	}

// 	while (true)
// 	{
// 		++i;
// 		if (10 == i)
// 			break; 
// 
// 		cout << i << endl;
// 
// 	}
// 	int i = 0, j = 0; 
// 
// 	// while 문 안에 증감식을 삽입 할 수도 있다. 
// 	while (++i < 10);
// 	// while문 옆에 세미콜론이 붙으면 이 한줄만 인식한다. 조건이 끝날때까지 반복. 
// 	{
// 		cout << i << endl; 
// 	}
	// n중 반복문 

// 
// 	int i = 0, j = 0;
// 
// 	while (++i < 10)
// 	{
// // 		if (j >= 10)
// // 		{
// // 			j = 0;
// // 		}
// 		while (++j < 10)
// 		{
// 			cout << "j = "  << j << endl; 
// 
// 		}
// 
// 		cout << "j = " << j << endl; 
// 		cout << " i = "<<i << endl;
// 	}

	//do~ while - while문과 똑같다. do~while은 최소 한번은 수행하는 반복문이다. 
	// while과 차이점이라면 while문은 위에서 조건을 확인하기 때문에 애초에 조건이 거짓이라면 단 한번도 
	// 돌아가지 않는다. 근데 do~ while은 무조건 최소 한번 수행을 하고 그 밑에서 조건을 확인. 
	// 이것이 차이. 그외에는 while문과 동일 하다. 

	do
	{
		cout << "zzzz" << endl; 
	} while (true);
}