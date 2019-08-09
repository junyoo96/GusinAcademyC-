#include "stdafx.h"
#include "Const.h"


CConst::CConst()
// 이것이 바로 이니셜 라이져 라는 문법.  붙여서 여러개 초기화를 해도 되고 나처럼 한줄씩 써도 무관. 코드 스타일임. 
	:m_iConst(2200) 
	,m_a(10)
	,m_b(20)
{
	// 이것은 초기화가 아닌 대입이다. 이미 객체가 생성이 다 된 이후 호출되기 때문. 
	//m_iConst = 200; 

	// 이니셜 라이저가 실행되는 시점 : 객체 선언 -> 메모리 할당 -> Initialize 호출 -> 생성자 호출 ;
	
	// 이니셜라이져를 사용하는 이유 
	// 초기화하는 대상을 명확히 인식할 수 있다. 

	// 성능상 약간의 이점이 있다. 선언과 동시에 초기화가 이루어지는 형태가 바이너리 형태로 진행하다보니 
	// 아주 약간 더 빠르다는 이점이 있다. 

	// 연속적으로 이니셜라이져를 사용하고 싶다면 ,(콤마)로 이어 나가면 된다. 

}


CConst::~CConst()
{
}

void CConst::ShowConst()
{
	cout << m_iConst << endl;
}

void CConst::TestNonConstant()
{
	cout << m_iConst << endl; 
	m_a = 99; 
	cout << m_a << endl; 
	cout << m_b << endl; 
}

void CConst::TestConstant() const
{
	cout << m_iConst << endl;
	// 함수 안에 들어오는 것들은 전부 const 성향을 띈다. 그래서 밑에 처럼 데이터 변경이 불가 하다. 

	//m_a = 99;
	cout << m_a << endl;
	cout << m_b << endl;
	// const 함수 안에서는 일반 함수를 호출 할 수 없다. 
	//일반 함수 안에서 데이터가 변경 될 수도 있기 때문. 
	//TestNonConstant();
}

void CConst::TestConstant()
{// Const 키워드로도 함수 오버로딩 가능. 
	cout << m_iConst << endl;
	m_a = 9888;
	cout << m_a << endl;
	cout << m_b << endl;
}
