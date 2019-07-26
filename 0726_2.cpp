#include <iostream>

void main()
{
	//동적 할당 : runtime시점에 heap 메모리영역에 할당, 사용자가 원하는 시점에 데이터 할당 및 소멸
	//code,data메모리 영역- 프로그램 시작 시 할당, 프로그램 종료시 소멸
	//stack 메모리 영역- 함수 시작 시 할당, 함수종료 시 소멸
	//heap영역-사용자가 임의로 할당 및 해제

	//C에서의 동적할당 함수
	//1.malloc()
	//2.calloc()

	//1.malloc()
	//void* : 주소값 보관용 포인터, 접근을 하려면 사용하는 것에 맞게 형변환을 해주어야함
	//4byte만큼 공간을 할당함
	int* ptr=(int*)malloc(sizeof(int));
	//stack에는 ptr포인터 변수 할당
	//heap에는 malloc으로 할당한 int값 할당
	*ptr = 10;
	std::cout << *ptr << std::endl;
	std::cout << ptr << std::endl;

	//sizeof로 가리킬 포인터의 자료형 크기보다 작게 할당을 하면 그 공간을 사용하는 거는 가능하지만
	//우리가 예약하지않는 공간을 컴퓨터가 임의로 잡았기 때문에 나중에 다른 변수의 공간을 잡을 때 공간이 겹칠 수 있음
	int* ptr2 = (int*)malloc(sizeof(double));
	*ptr2 = 32767;
	std::cout << *ptr2 << std::endl;
	std::cout << sizeof(*ptr2) << std::endl;


	//2.calloc(몇개의 공간 할당할건지, 각 공간의 크기를 몇으로 할지)
	//calloc은 초기화안해도 0으로 알아서 초기화됨 , malloc은 쓰레기값 들어감
	int* ptr = (int*)calloc(1, 4);
	std::cout << *ptr << std::endl;
	std::cout << ptr << std::endl;

	//malloc과 calloc으로 배열 할당하기 ====================================================

	//malloc으로 10개 크기의 int형 배열 할당
	int* ptr = (int*)malloc(sizeof(int) * 10);

	//calloc으로 배열 할당
	int* ptr = (int*)calloc(10, sizeof(int));

	
	//====================================================

	//C에서의 동작 할당한 메모리공간 해제 함수
	//free함수는 포인터 가리키는 할당된 공간을 해제하는 함수(포인터에 저장된 주소값은 유지(뎅글링 포인터-이미소실된 공간의 데이터를 갖고있는 것을 가리킴)
	free(ptr);
	//주소값은 유지되어 있기 때문에 이것을 통한 잘못된 접근을 방지하기 위해 nullptr로 변경
	ptr = nullptr;
	//따라서, 할당된 공간을 해제하더라도 ptr로 접근가능(하지만, 이런 방식은 위험함, 다른 변수하고 충돌함)	
	ptr[0] = 3;
	
	//===============================
	//메모리공간을 할당하고 포인터로 가리킨 다음 다른 메모리공간을 할당하고 가리키면 메모리누수 발생
	int* ptr = (int*)calloc(1, 4);
	ptr = (int*)calloc(1, 4);

	//지운공간을 또 지우면 에러
	free(ptr);
	free(ptr);
	
}