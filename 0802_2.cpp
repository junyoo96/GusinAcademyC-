#include "stdafx.h"	


class CCar
{
//접근 제어 지시자를 명시하자
public:
	//멤버 함수
	void Driving()
	{
		std::cout << "Driving" << std::endl;
	}
private:
	void Break()
	{
		std::cout << "Break" << std::endl;
	}
	//멤버 변수
	int m_iSpeed;
	int m_iSize;
	
};

void main()
{
	//클래스 - 객체를 구성하는데 필요한 데이터와 데이터를 다루는 기능을 한데 묶어놓은 곳
	CCar tAvante;

	//구조체와 클래스의 유일한 차이 - 접근제어 지시자 차이
	//구조체 - default가 public
	//클래스 - default가 private

	//접근 제어 지시자 - private, public, protected
	/*
	private - 클래스 외부 접근 불가
	public  - 모든 접근 허용
	protected - 외부에서의 접근을 차단하지만 상속관계에서만 접근 허용
	*/


	//구조체와 메모리 할당하는 방식도 똑같음(가장 큰 자료형 기준)
	//멤버변수만이 클래스의 크기에 영향을 미침
	//멤버변수가 아예 없으면 기본 1byte으로 잡힘
	std::cout << sizeof(CCar) << std::endl;

	//객체 포인터 형식을 사용할 때 구조체와 똑같이 ->연산자를 사용해서 접근


	//클래스 4대속성 - Information hiding, Encapsulation, Inheritance, Polymorphism
	/*
	Information hiding - 기본 멤버 접근을 private으로 두어 외부로부터 원치 않는 데이터 변경을 막겠다는 의미, 함수를 통해 데이터를 제어 하겠다는 것
	
	Encapsulation - 데이터와 데이터를 다루는 기능을 하나로 묶어 외부로부터 숨기는 것

	Inheritance - 클래스 끼리 공통된 데이터를 요한다면 상속을 통해 공통된 데이터를 물려줄 수 있음
				  부모는 자식 클래스들의 공통점을 추출한 추상적 존재
				  하위로 갈수록 세분화가 일어나고 위로 올라갈수록 추상화가 일어남
	Polymorphism - 같은 이름으로 각기 다른 기능을 수행하는 것
	*/

}

