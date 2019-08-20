// 0820.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

class CObj
{
public:
	virtual void Render()
	{

	}
};

class CPlayer : public CObj
{

};

class CStudent
{

};


int main()
{
	//dynamic_cast

	//이 형태를 업캐스팅라함
	//업캐스팅은 실객체는 자식이고 객체 포인터가 부모일 때를 말함
	CObj* pObj = new CPlayer;
	//virtual 키워드를 지워보고 넣어보면 되는지 안되는지 알수 있음(가상함수가 있느냐도 확인함)
	// 부모 형식으로 캐스팅 했던 걸 다시 자식형식으로 다운 캐스팅 하는중
	CPlayer* pPlayer = dynamic_cast<CPlayer*>(pObj);

	//불안전한 다운캐스팅 예제(실 객체가 부모객체인것을 자식 객체로 다운캐스팅할 때)
	//컴파일은 되지만 runtime때 nullptr반환
	CObj* pObj = new CObj;
	CPlayer* pPlayer = dynamic_cast<CPlayer*>(pObj);

	//=================================================
	//const_cast<>  : const를 풀어버리는 키워드
	//const_cast는 포인터형식,레퍼런스형식일때만 사용가능
	int i = 0;
	const int* ptr = &i;
	int* ptr3 = const_cast<int*>(ptr);

	//=================================================
	// reinterpret_cast<> : C스타일과 똑같이 무논리로 형변환 가능
	// 포인터형식, 레퍼런스 형식일 때 사용가능
	// 차라리, 이거 사용할거면 C스타일의 형변환을 사용하는게 나음
	CPlayer* pPlayer = new CPlayer;
	CStudent* pStu = reinterpret_cast<CStudent*>(pPlayer);

    return 0;
}

//왜 virtual 함수가 있어야 dynamic_cast가 가능한지