// stdafx.cpp : ǥ�� ���� ���ϸ� ��� �ִ� �ҽ� �����Դϴ�.
// 0801_1.pch�� �̸� �����ϵ� ����� �˴ϴ�.
// stdafx.obj���� �̸� �����ϵ� ���� ������ ���Ե˴ϴ�.

//�ߺ����� ���¹��
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

//Ŭ������ ����
//Ŭ������ �밡���� ǥ��� �پ��ִ� ���� ����
class CCar
{
	//�������
	//��������� ���� �밡���� ǥ���
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
	//���� ������ - ���״�� ����� cpp�� �����Ͽ� ������ �� �� ����
	//h����- �Լ��� ����
	//cpp����- �Լ��� ������

	std::cout << Add(10, 20) << std::endl;

	//===========================================================
	//oop (��ü ���� ���α׷���)
	//Ŭ���� - �߻�ȭ�� �ϳ��� ���赵
	//Ŭ������ ������ ��ü ����(��ü ������ ������ �Լ��� ���� �̷����(Message Parsing))
	//Ŭ������ ����� ���� �ڷ���

	CCar abantte;
	abantte.Driving();


	return 0;
}

#endif
