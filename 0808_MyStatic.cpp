#include "stdafx.h"
#include "MyStatic.h"

int CMyStatic::m_iStatic = 0;

CMyStatic::CMyStatic()
{
	m_iStatic = 10; 
}


CMyStatic::~CMyStatic()
{
}
