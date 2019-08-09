// 0807.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "Const.h"
#include "MyStatic.h"



int main()
{
//	CConst Const; 
// 	Const.ShowConst(); 
// 	Const.TestNonConstant();
	// const 객체는 const 함수만 호출 할 수 있다 .
	// 왜 ? 일반 함수로 값을 변경할수 있는 위험이 있기 때문에. 
	// 즉 const 성향이 무시되기 때문에 불가 하다. 

	// const가 붙기 전엔 주소값에 접근하여 데이터 변경이 가능. 
	// 그러나 함수에 const const 를 붙여줌으로써 외부에서 데이터 변경을 막음. 
	// 지금 당장은 const는 왠만하면 자제하고 
	 // 데이터 주고 받는게 편안해지고 익숙해 진다면 그땐 하나하나 Const 키워드를 붙여나가는 것을 
	// 추천 한다.
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

