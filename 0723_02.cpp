#include <iostream>
using namespace std; 
void TestString(char* pName, char* pSource)
{
	strcpy_s(pName, strlen(pSource) + 1 ,pSource);
	// 복사받을 문자 배열의 크기를 넘어서도 안되며 복사할 문자열의 길이보다 작아져서도 안된다.
	//strcpy_s(pName, strlen(pSource) + 100, pSource);
}
void main()
{
	//문자열 관련 함수. 
	//strlen 문자의 길이반환함수. 
// 	char szName[16] = "ParkByoungGeon";
// 	cout << strlen(szName) << endl; // null문자를 제외한 순수 문자열의 길이를 반환 한다. 
// 	cout << sizeof(szName) << endl;// 문자 배열의 총 크기를 반환한다. 
// 
// 	 // strcpy_s(1. 복사 받을 문자열, 2.복사 할 문자열)
// 	 // 함수 오버로딩 되어 있음 사이즈를 명시하는데 
// 	// 둘다 포인터 형식일때 사이즈를 명시해 줘야 한다. 
// 	strcpy_s(szName, "Apple");
// 	//strcpy_s(szName, 6, "Apple1");
// 	
// 	TestString(szName, "YoungMon");
// 	cout << szName << endl;

	// strcat_s() 1.결합할 대상, 2.결합할 문자열 
// 	char szJusin[16] = "Jusin111111";
// 	char* pGame = "Game";
// 	strcat_s(szJusin, pGame);
// 
// 	cout << szJusin << endl; 

	//strcmp 1.비교할 문자열, 2.비교할 문자열2, 반환값은 문자열이 똑같은 경우 0을반환 
	//만약 다를 경우 그외 다른수 반환. 
	// 그래서 앞에 !연산자를 붙여줬다. 
// 	char szName[16] = "박병건"; 
// 	if (!strcmp("박병건", "박병건"))
// 		cout << "문자가 똑같다!" << endl; 


}