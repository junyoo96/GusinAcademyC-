#include "stdafx.h"

inline int Add(int _a, int _b)
{
	return _a + _b;
}

void main()
{
	//inline 함수
	//매크로 함수와 비슷하게 삽입되는 개념
	//일반함수에 비해 호출속도가 빠름
	//inline 함수는 내가 설정하는게 불가능(내가설정해도 컴퓨터가 재량으로 빼는것이가능)
	//헤더의 클래스 내부에 정의된 함수는 inline선언이 자동으로 추가됨
	std::cout << Add(10, 20) << std::endl;

	//inline화가 풀리는 경우
	//1. 함수의 주소값을 요구하는 경우
	//2. 재귀함수에서 호출하는 경우
}