// stdafx.cpp : 표준 포함 파일만 들어 있는 소스 파일입니다.
// 0801_1.pch는 미리 컴파일된 헤더가 됩니다.
// stdafx.obj에는 미리 컴파일된 형식 정보가 포함됩니다.

//중복참조 막는방식
//1. #pragma once

//2. #ifndef
//#ifndef __CALC_H__
//#define __CALC_H__
//#endif

#include "stdafx.h"
#include "Calc.h"
#include <iostream>

#ifndef __CALC_H__
#define __CALC_H__

//클래스의 정의
//클래스도 헝가리안 표기법 붙어주는 것이 좋음
class CCar
{
	//멤버변수
	//멤버변수에 대한 헝가리안 표기법
	int m_iSpeed;
	int m_iSize;

	void Driving()
	{
		std::cout << "Driving!" << std::endl;
	}
	void Break()
	{
		std::cout << "Break!" << std::endl;
	}
	void Airconditioner()
	{
		std::cout << "Airconditioner!" << std::endl;
	}


};


int main()
{
	//분할 컴파일 - 말그대로 헤더의 cpp를 분할하여 컴파일 할 수 있음
	//h파일- 함수의 선언
	//cpp파일- 함수의 구현부

	std::cout << Add(10, 20) << std::endl;

	//===========================================================
	//oop (객체 지향 프로그래밍)
	//클래스 - 추상화된 하나의 설계도
	//클래스를 가지고 객체 생성(객체 끼리의 소통을 함수를 통해 이루어짐(Message Parsing))
	//클래스도 사용자 정의 자료형

	CCar abantte;
	abantte.Driving();


	return 0;
}

#endif
