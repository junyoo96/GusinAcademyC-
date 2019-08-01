#include <iostream>
using namespace std;

// 메크로 상수 정의 
// 메크로 상수를 정의 할때는 세미콜론을 붙이지 않는다. 
#define PI 3.141592f

#define OBJ_DEAD 1
#define OBJ_NOEVENT 0
#define OBJ_VECTORY 2
// 메크로를 사용해서 함수 형태로 사용 할 수도 있음. 
// 메크로 함수. 
#define 제곱(x)	 x * x 
// 메크로 함수의 두줄 이상 표현 
#define Render(RenderX)							\
cout << "박병건은 메크로 함수를 쓴다!" <<endl;		\
cout << "이건 될까 안될까? " <<endl;				\
cout << "들어온 값은 :" << RenderX << endl; 


void main()
{
	//ㅋㅋㅋㅋ
	// 메크로 상수 
	cout << PI << endl; 

	cout << OBJ_DEAD << endl; // == cout << 1 << endl; 
	cout << 제곱(10) << endl;  // cout << 10 * 10 << endl; 
	Render(10)
}