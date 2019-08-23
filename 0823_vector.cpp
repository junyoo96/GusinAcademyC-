// 0823.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <vector>

int main()
{
	//vector
	std::vector<int> vec;

	vec.push_back(10);
	vec.push_back(20);

	//===============================================================================

	//임의접근 가능 - 동적배열이기 때문에
	std::cout << vec[0] << std::endl;
	//===============================================================================

	//1.size() - 원소갯수 반환
	std::cout << vec.size() << std::endl;

	//===============================================================================
	//2.pop_back() - 원소 삭제(뒤에서부터)
	//삭제해도 이전 메모리공간은 유지
	vec.pop_back();

	for (int i = 0; i < vec.size(); ++i)
	{
		std::cout << vec[i] << std::endl;
	}
	std::cout << vec.size() << std::endl;

	//===============================================================================

	//vector는 capacity()라는 메모리 정책을 사용함(잦은 재할당 및 복사를 방지하기 위해) 
	//- 이러면 원소갯수많을경우 하나늘렸을때 capacity가 size보다 훨씬크게잡혀서  vector는 주로 사용할 공간을 예약하고 사용
	//3.capacity() - 메모리 공간을 확인하는 함수
	//capacity메모리 정책 - size가 capacity를 넘어서는 경우, 기존메모리 size의 반만큼 늘림  (결과값이 소수점이면 내림)	
	std::cout << vec.capacity() << std::endl;

	//===============================================================================

	//4.clear() - 원소 제거
	vec.clear();

	//===============================================================================
	
	//5.vector에 할당된 메모리 공간 날리는 방법
	//5-1.swap이라는 함수를 이용하여 날릴 수 있음(옛날방법)
	//swap 객체대 임시객체 끼리의 swap
	std::vector<int> vec3;
	vec3.swap(std::vector<int>());

	//5-2. shrink_to_fit() - C++11이후에 나온 메모리 공간을 제단하는 함수
	vec3.shrink_to_fit();

	//===============================================================================

	//6.empty()함수 - 원소 갯수가 비었는지를 검사하는 함수
	//비었으면 true, 아니면 false
	vec3.empty();

	//===============================================================================

	std::vector<int> vecTest;
	vecTest.push_back(1);
	vecTest.push_back(2);
	vecTest.push_back(3);

	//front() - 제일 첫번째 원소를 반환해주는 함수
	std::cout << vecTest.front() << std::endl;
	//back() - 제일 마지막 원소를 반환해주는 함수
	std::cout << vecTest.back() << std::endl;

	//===============================================================================

	/*
	iterator(반복자) -	포인터와 비슷한 개념. 컨테이너 원소에 접근하여 다음원소를 가리킬 수 있음
						STL의 핵심, 각 컨테이너마다 접근방식이 다르기 때문에 일반화하여 사용하기 위해 사용
						기본 컨테이너의 원소 하나를 가리키는 기본 역할을 수행하며 접근하여 읽고 쓸수 있음

						//증감연산 가능
						반복자의 종류에는 양방향, 단방향, const반복자, 출력반복자 , 입력반복자, 임의접근반복자 등이 있음
						자주 사용하는 반복자는 양방향과 임의접근 반복자
						
						//STL의 특성에 따라 제공되는 반복자가 다름
						vector는 임의접근 반복자
						list는 양방향 반복자
	*/

	std::vector<int> vec5;
	vec5.push_back(1);
	vec5.push_back(2);
	
	//begin() - 제일 첫번째 원소의 주소값을 반환
	std::vector<int>::iterator iter = vecTest.begin();
	//값 읽기
	std::cout << *iter << std::endl;
	//값 쓰기
	*iter = 20;
	//다음원소 가리키기
	++iter;
	--iter;
	//이런식으로도 가능
	iter -= 2;
	//임의접근으로도 가리키는 것 가능
	iter[1] = 10;
	
	//===============================================================================

	//insert() - 원소를 중간삽입 할 때 사용(포인터 이동이 일어남)
	std::vector<int> vec6;
	vec6.push_back(1);
	vec6.push_back(2);
	//vec6.insert(/*1.어디에 넣을것인지*/,/*2.넣을 값*/); 
	vec6.insert(vec6.begin(), 99);

	for (std::vector<int>::iterator iter = vecTest.begin(); iter != vecTest.end(); ++iter)
	{
		std::cout << *iter << std::endl;
	}

	//erase() - 원소를 중간제거 할 때 사용(지우고 다음원소의 주소값을 반환함)
	std::vector<int>::iterator iter2 = vec6.begin();
	vec6.erase(iter2);

	//===============================================================================

	//vector 메모리 공간 예약
	vec6.reserve(10);

	//size와 capacity 둘다 재조정하는 함수(이때 원소는 모두 0으로 초기화)
	vec6.resize(10);

    return 0;
}

