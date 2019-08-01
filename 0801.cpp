#include <iostream>

#define MyTRUE 0
#define ABCD 99

void main()
{
	//조건부 컴파일 - 전처리단계에서 컴파일 여부를 결정함
//#if
//#ifdef
//#ifndef

//#이 붙은 코드는 전처리 단계에서 처리됨
//#endif
//#endif
//#endif

	int iTest = 99;

//1. #if(거의 사용안함)
//0이 아니면(true면) 안에 코드 컴파일, 0이면 코드 컴파일 x
//#if 0 /*1>iTest*/ /*조건부 컴파일에는 변수로 조건을 잡을 수 없음(오류가 안나고 무시함), 시점이 다르기 때문(조건부컴파일-전처리단계, 변수가 생성되는 시점- Runtime) */
//	std::cout << "컴파일 함?" << std::endl;
//#endif

//#if MyTRUE /*1>iTest*/ /*조건부 컴파일에는 변수로 조건을 잡을 수 없음(오류가 안나고 무시함), 시점이 다르기 때문(조건부컴파일-전처리단계, 변수가 생성되는 시점- Runtime) */
//	std::cout << "컴파일 함?" << std::endl;
//#elif 1
//	std::cout << "컴파일 하는거?" << std::endl;
//#else
//	std::cout << "컴파일 하뇨?" << std::endl;
//#endif


//2. ifdef - 내가 정의한 매크로가 있다면 코드 수행해라
//#ifdef ABCD
//	std::cout << "코드 수행" << std::endl;
//#endif

//실제로는 이미 정의되어 있는 "_DEBUG"라는 매크로 사용
//_DEBUG 디버그 모드일 때 정의되어 있는 매크로
//#ifdef _DEBUG
//	std::cout << "debug모드" << std::endl;
//#endif
	
//3. ifndef - 내가 정의한 매크로가 없다면 코드 수행해라
#ifndef PBG
	std::cout << "PBG?" << std::endl;
#endif


}