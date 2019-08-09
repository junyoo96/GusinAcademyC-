#include "stdafx.h"
#include "ExternTest.h"


CExternTest::CExternTest()
{
}


CExternTest::~CExternTest()
{
}

void CExternTest::ExternTestFunc()
{
	cout << &g_iExtern << endl; 
	cout << g_iExtern << endl; 
}
