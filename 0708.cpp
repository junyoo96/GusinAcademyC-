#include <iostream>
#include <bitset>
using namespace std;

void main()
{
	//쉬프트 연산자 : 비트를 이동시키는 연산자
	//사용법 : 2의 n승으로 곱하거나 나눌때 사용
	int iTest = 1;
	//좌측으로 비트를 2칸이동
	iTest = iTest << 2;
	cout << iTest << endl;

	//*쉬프트 연산자를 사용해서 비트범위가 벗어나면 다시 그 비트는 못돌아옴

	//비트셋 객체를 사용하면 10진수를 2진수로 비트로 볼 수 있음
	bitset<8> bitset = 10;
	cout << bitset << endl;

	//증감연산자
	int a = 0;
	int result = 0;
	//**전위증감(1. 증감, 2. 대입) - 계산순서
	//증감이 일어나고 대입이 수행됨
	result=++a;
	result=--a;
	//**후위증감(1. 대입 ,2. 증감)
	result=a++;
	result=a--;

	//============================================================
	
	//분기문 : goto, if, switch

	//goto : 내가 원하는 곳으로 코드의 흐름을 보내 버린다 
	//반복문이 겹쳐있을 때 빠져나오기 쉬움 , 논리가 없기 때문에 코드흐름을 파악하기 힘듬
	cout << "안녕" << endl;
	cout << "하이" << endl;
	goto DOWN;
DOWN:
	cout << "잘가" << endl;

	//*디버깅 f9 : 중단점 설정 , f10:다음순서로 이동
	
	
	//



}