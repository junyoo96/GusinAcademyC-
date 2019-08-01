#include <iostream>
using namespace std; 

void main()
{
// 	int iArr[5] = { 1,2,3,4,5 };
// 
// 	FILE* fp = nullptr; 
// 	// 파일 입출력 함수 fopen_s
// 	// 1.개방하고자 하는 통로의 정보를 가지고 있을 FILE 구조체 요구 
// 	// 2. 파일의 경로, 
// 	// 3. 어떤 방식으로 사용 할 건지 , 읽기 모드 혹은 쓰기 모드
// 	// 텍스트 모드 혹은 바이너리 모드 
// 
// 	// 현재 데이터 쓰기 
// // 	errno_t err = fopen_s(&fp, "../Data.txt", "wb");
// // 	// 바이너리 모드 출력 하는 함수. 
// // 	//fwrite(내가 넣고자 하는 데이터의 시작 주소, 원소 하나의 크기, 몇개의 원소를 넣을것인지, 통로);
// // 	if (0 == err)
// // 	{
// // 		fwrite(iArr, sizeof(int), 5, fp);
// // 	}
// // 	else
// // 		cout << "통로 개방 실패... " << endl; 
// // 	fclose(fp);
// 
// 	//데이터 읽기 
// 	int iTestArr[5] = {};
// 	errno_t err = fopen_s(&fp, "../Data.txt", "rb");
// 	// 바이너리 모드 출력 하는 함수. 
// 	//fwrite(내가 넣고자 하는 데이터의 시작 주소, 원소 하나의 크기, 몇개의 원소를 넣을것인지, 통로);
// 	if (0 == err)
// 	{
// 		//fread(1. 데이터를 넣을 시작 주소. 
// 		//		2. 원소의 크기 
// 		//		3. 몇개의 원소를 가져 올건지. 
// 		//		4. 내가 개방한 통로. 
// 		fread(iTestArr, sizeof(int), 5, fp);
// 	}
// 	else
// 		cout << "통로 개방 실패... " << endl;
// 	fclose(fp);
// 
// 	for (int i = 0 ; i < 5; ++i )
// 	{
// 		cout << iTestArr[i] << endl; 
// 	}

}