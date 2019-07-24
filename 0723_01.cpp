#include <iostream>
using namespace std; 

void main()
{
	// 문자 배열과 문자열 상수 

// 	//문자 배열 선언 방법 
// 	char szName[16] = {};
// 	char szName2[16] = { 'J', 'u', 's', 'i', 'n' };
// 	char szName3[16] = "Jusin";// 초기화 할때만 사용하는 문법. 절때 절대 절대 절대 다른데서 값대입을 할 수 없다. 
// 	char szName4[16] = "";
// 	//선언과 초기화 분리. 
// 	char szName5[16];
// 	szName5[0] = 'J';
// 	szName5[1] = 'u';
// 	szName5[2] = 'S';
// 
// 	// 잘못된 방식 
// 	//szName3 = "Game";  배열의 이름은 상수 포인터. 지금은 주소값 대입하는 형식이라 당연히 불가. 
// 	
// 	// 데이터 읽기 
// 	//cout << szName2[0] << szName2[1] << szName2[2] << szName2[3] << szName2[4] << szName2[5] << endl;
// 	cout << szName2 << endl; // null문자를 만날때 까지 문자를 읽는다. 
// 	cout << szName5 << endl; 
// 
// 	//콘솔에서 데이터 입력 받기 
// 	int iArr[5] = {}; 
// 
// 	for (int i = 0 ; i < 5; ++i)
// 	{
// 		cin >> iArr[i]; 
// 		cout << iArr[i] << endl; 
// 	}

// 	char szName[16] = ""; 
// 	for (int i = 0 ; i < 16; ++i)
// 	{
// 		cin >> szName[i];
// 		
// 	}
// 	cout << szName << endl; 

// 	char szName[16];
// 	cin >> szName; 
// 	cout << szName << endl; 
// 
// 	cin >> szName;
// 	cout << szName << endl;
	//char szTest[5] = "Jusin"; // 불가 문자열은 맨뒤 자동 null문자가 추가 되기 때문
	// 배열의 크기를 잡을때는 반드시 널문자까지 고려하여 크기를 잡아야 한다. 


// 	// 문자포인터 형식
// 	char* pName = "jusin";
// 	// 잘됨. 원래 가지고 있던 jusin이라는 문자열 상수가 있던 주소값을 버리고 Game이 있는 주소값을 참조하는 상황. 
// 	pName = "Game";
// 	// 문자열 상수가 있는 주소값에 접근하여 데이터를 변경하는것 자체가 불가. 
// 	//왜? 문자열 '상수' 이기 때문에. 
// 	cin >> pName;
// 	//이하동문 
// 	//pName[0] = 'J'; 
// 	//한글자씩 읽는건 아무런 문제가 없음 
// 	cout << pName[0] << endl; 
// 	cout << pName[1] << endl;
// 	// 시작주소로 접근해 널문자까지 문자를 읽는다. 
// 	cout << pName << endl; 


// 	char* pName = "jusin";
// 	char szTest[16] = ""; 
// 	pName = szTest;
// 	cin >> pName;
// 	cout << pName << endl;
	

}