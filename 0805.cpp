// 0805.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

//질문
//함수-변수 순서로 작성하는 순서 이유는?
//

#include "stdafx.h"
//성적표 만들기

typedef struct tagInfo
{
	char szName[32];
	int iKor;
	int iMath;
	int iEng;
	int iTotal;
	float fAver;
}INFO;

class CGrade
{
public:
	void InitGrade();
	void InputGrade();
	void ShowAll();
	void ShowSearch();
	void ReleaseGrade();
private:
	INFO* m_pStudent;
	int m_iSize;
};

class CMainProgress
{
public:
	void Initialize()
	{
		m_pGrade = new CGrade;
		m_pGrade->InitGrade();
	}
	void Update()
	{
		int iSelect = 0; 
		while (true)
		{
			std::cout << "1. 입력, 2. 전체 출력, 3. 검색 출력, 4. 나가기" << std::endl;
			std::cin >> iSelect;
			switch (iSelect)
			{
			case 1:
				m_pGrade->InputGrade();
				break;
			case 2:
				m_pGrade->ShowAll();
				break;
			case 3:
				m_pGrade->ShowSearch();
				break;
			case 4:
				std::cout << "이용 감사" << std::endl;
				return;
				break;
			default:
				std::cout << "잘못 누름" << std::endl;
				break;
			}
		}
	}
	void Release()
	{
		m_pGrade->ReleaseGrade();
		if (m_pGrade)
		{
			delete m_pGrade;
			m_pGrade = nullptr;
		}
	}
private:
	CGrade* m_pGrade;
};

int main()
{
	CMainProgress Main;
	Main.Initialize();
	Main.Update();
	Main.Release();
    return 0;
}

void CGrade::InitGrade()
{
	m_pStudent = nullptr;
	m_iSize = 0;
}

void CGrade::InputGrade()
{
	int iSize = 0;

	std::cout << "입력 할 학생 수 : ";
	std::cin >> iSize;

	if (m_pStudent==nullptr)
	{
		m_pStudent = new INFO();		
	}
	else
	{
		INFO* pTemp = new INFO[m_iSize + iSize];
		memcpy(pTemp, m_pStudent, sizeof(INFO)*m_iSize);
		
		ReleaseGrade();
		m_pStudent = pTemp;
	}

	for (int i = m_iSize; i < m_iSize + iSize; ++i)
	{
		std::cout << i + 1 << "번째 학생" << std::endl;
		std::cout << "이름 : ";
		std::cin >> m_pStudent[i].szName;
		std::cout << "국어 : ";
		std::cin >> m_pStudent[i].iKor;
		std::cout << "영어 : ";
		std::cin >> m_pStudent[i].iEng;
		std::cout << "수학 : ";
		std::cin >> m_pStudent[i].iMath;
		m_pStudent[i].iTotal = m_pStudent[i].iKor + m_pStudent[i].iEng + m_pStudent[i].iMath;
		m_pStudent[i].fAver = float(m_pStudent[i].iTotal) / 3;		
	}
	m_iSize += iSize;
}

void CGrade::ShowAll()
{
	for (int i = 0; i < m_iSize; ++i)
	{
		std::cout << i + 1 << "번째 학생 " << std::endl;
		std::cout << "이름 : " << m_pStudent[i].szName << std::endl;
		std::cout << "국어 : " << m_pStudent[i].iKor << std::endl;
		std::cout << "영어 : " << m_pStudent[i].iEng << std::endl;
		std::cout << "수학 : " << m_pStudent[i].iMath << std::endl;
		std::cout << "평균 : " << m_pStudent[i].fAver << std::endl;
		std::cout << "총점 : " << m_pStudent[i].iTotal << std::endl;
	}
}

void CGrade::ShowSearch()
{
	char szSearchName[32] = ""; 

	std::cout << "검색할 이름 ; " << std::endl;
	std::cin >> szSearchName;

	for (int i = 0; i < m_iSize; ++i)
	{
		if (!strcmp(szSearchName, m_pStudent[i].szName))
		{
			std::cout << i + 1 << "번째 학생 " << std::endl;
			std::cout << "이름 : " << m_pStudent[i].szName << std::endl;
			std::cout << "국어 : " << m_pStudent[i].iKor << std::endl;
			std::cout << "영어 : " << m_pStudent[i].iEng << std::endl;
			std::cout << "수학 : " << m_pStudent[i].iMath << std::endl;
			std::cout << "평균 : " << m_pStudent[i].fAver << std::endl;
			std::cout << "총점 : " << m_pStudent[i].iTotal << std::endl;
			return;
		}
	}

}

void CGrade::ReleaseGrade()
{
	if (m_pStudent)/*가리키는 주소값이 있다면*/
	{
		delete[] m_pStudent;
		m_pStudent = nullptr;
	}
}

