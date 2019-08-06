// 0806.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

class CIPhone
{
	//Get과 Set이라는 함수를 만들어 데이터를 제어함
public:
	//Get- 함수는 데이터를 외부로 내보낼 때 사용
	//Set- 함수는 데이터를 외부로부터 받아올 때 사용
	void Init()
	{
		strcpy_s(m_szOS, sizeof(m_szOS), "IOS");
	}
	char* Get_OS()
	{
		return m_szOS;
	}
	void Set_OS(char* pOS_)
	{
		if (!strcmp(pOS_, "안드로이드"))
		{
			strcpy_s(m_szOS, sizeof(m_szOS), "IOS");
		}
		strcpy_s(m_szOS, sizeof(m_szOS), pOS_);
	}
private:
	char m_szOS[16];

};

int main()
{
	// 은닉화 : 멤버변수를 접근제어 지시자를 private으로 둠으로서 외부로부터 원치 않는 데이터 변경을 막는 것을 뜻함

	CIPhone tIphone;
	tIphone.Init();

	//Get함수
	char* pOs = tIphone.Get_OS();
	tIphone.Set_OS("Android");
	std::cout << pOs << std::endl;

    return 0;
}

