// 0807.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "Const.h"
#include "MyStatic.h"



int main()
{
//	CConst Const; 
// 	Const.ShowConst(); 
// 	Const.TestNonConstant();
	// const ��ü�� const �Լ��� ȣ�� �� �� �ִ� .
	// �� ? �Ϲ� �Լ��� ���� �����Ҽ� �ִ� ������ �ֱ� ������. 
	// �� const ������ ���õǱ� ������ �Ұ� �ϴ�. 

	// const�� �ٱ� ���� �ּҰ��� �����Ͽ� ������ ������ ����. 
	// �׷��� �Լ��� const const �� �ٿ������ν� �ܺο��� ������ ������ ����. 
	// ���� ������ const�� �ظ��ϸ� �����ϰ� 
	 // ������ �ְ� �޴°� ��������� �ͼ��� ���ٸ� �׶� �ϳ��ϳ� Const Ű���带 �ٿ������� ���� 
	// ��õ �Ѵ�.
	//const int* ptr = Const.Get_Int();
	//*ptr = 1234;

//	Const.TestNonConstant();
// 	const CConst Const;
// 	Const.TestConstant();

	CMyStatic Static; 
	Static.ShowStatic();
	Static.AddStatic(); 
	Static.ShowStatic();
	CMyStatic Static2; 
	Static2.AddStatic(); 
	Static.ShowStatic();

	cout << CMyStatic::m_iStatic << endl; 
	//cout << CMyStatic::m_iNonStatic << endl;
    return 0;
}

