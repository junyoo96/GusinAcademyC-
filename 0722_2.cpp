#include <iostream>
//=======================================
//배열 함수 인자 넘기기에는 2가지 방법이 있음


//1.
void Show(int* ptr)
{
	for (int i = 0; i < 5; ++i)
	{
		std::cout << ptr[i] << std::endl;
	}

}

//2.
//오버로딩 안됨(똑같은 걸로 받아들임 위의 함수하고)
void Show(int ptr[])
{
	for (int i = 0; i < 5; ++i)
	{
		std::cout << ptr[i] << std::endl;
	}

}



void main()
{
	int iArr[5] = { 1,2,3,4,5 };
	Show(iArr);

	//2차원배열
	int iArr2D[2][3] = {
		{ 1,2,3 },
		{ 4,5,6 }
	};

	//int iArr2D[행][렬]
	//int iArr2D[y][x]

	//그림으로 이해하면 될듯
	//위의 2차원배열 5에 접근하는 방법 
	std::cout << *(*(iArr2D + 1) + 1) << std::endl;
	std::cout << *((*iArr2D + 4)) << std::endl;
}