#include<iostream>

//이 함수안에서 배열의 길이를 잴 수 없음, 배열의 길이를 알려면 매개변수로 넘겨주어야함
//포인터 변수라서 sizeof로 배열 길이를 못잼, ptr[]은 배열의 이름이 아니라서
void Test2(int ptr[], int iSize_)
{
	
}

void main()
{
	int iArr[3] = { 1,2,3 };
	//배열의 개수를 계산해서 반환
	Test2(iArr, sizeof(iArr) / sizeof(int));
}