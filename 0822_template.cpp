// 0822.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

//함수 템플릿 - 원형
template<typename T>
T Add(T a,T b)
{
	return a + b;
}

//템플릿 특수화
template<>
const char* Add(const char* a, const char* b)
{
	int size = (strlen(a) + strlen(b)) + 1;
	char* tmp = new char[size];
	strcpy_s(tmp, size, a);
	strcat_s(tmp, size, b);

	return tmp;
}

//구조체 템플릿
template<typename T>
struct tagInfo
{
	T a;
	T b;
	T c;
};

//클래스 템플릿
template<typename T>
class CObj
{
public:
	CObj(T _a, T _b, T _c)
		:a(_a),b(_b),c(_c)
	{

	}
	void Render()
	{
		std::cout << a << "," << b << "," << c << std::endl;
	}
private:
	T a;
	T b;
	T c;
};

//부분 템플릿 : 클래스를 대상으로 멤버함수만 템플릿화 할 수 있음
class CObjTwo
{
public:
	CObjTwo(int _a, int _b, int _c)
		:a(_a), b(_b), c(_c)
	{

	}
	template<typename T>
	void Render()
	{
		std::cout << a << "," << b << "," << c << std::endl;
	}
private:
	int a;
	int b;
	int c;
};

//같은 자료형 이면 같이 공유해서 사용하고, 다른 자료형이면 따로 만들어서 사용
template<typename T>
void Test(T a)
{
	static int i = 0;
	++i;
	std::cout << i << std::endl;
}

int main()
{
	//템플릿 함수
	std::cout << Add<int>(1, 2) << std::endl;

	//템플릿 함수 특수화
	std::cout << Add("대한", "민국") << std::endl;

	//템플릿 클래스
	CObj<int> cobj(1, 2, 3);
	cobj.Render();


	//템플릿 구조체
	tagInfo<int> tagInfo;
	tagInfo.a = 1;
	tagInfo.b = 2;
	tagInfo.c = 3;
    return 0;

	//템플릿 파일분할
	//클래스 안의 템플릿 함수는 헤더파일안에서 선언 및 정의함
	//(분리되면 컴파일단계에서 링커로 인해 h,cpp가 묶이기 전이라 전이라 템플릿 함수선언된것을 모르기 때문에 cpp파일까지 추가해주어야되서 번거로움)
}

