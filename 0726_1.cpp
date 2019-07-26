#include <iostream>

enum STATE
{
	IDLE
};

enum MONSTER
{
	오크,
	고블린,
	토끼,
	거북이,
	늑대,
	MONSTER_END//이걸 넣은 이유는 MONSTER의 총크기를 알기 위해
};

void main()
{
	STATE eState = IDLE;
	switch (eState)
	{
	case IDLE:
		std::cout << "걸어라" << std::endl;
	}
	char szMonsterName2D[MONSTER_END][64];

	//단순 상수형식의 정수로 취급하기 때문에 사용가능
	int iTest = IDLE;	

	//enum의 크기는 4byte
	std::cout << sizeof(STATE) << std::endl;

	//다른 자료형으로 받아들여 대입 불가
	eState = 2;
	eState = iTest;

	//연산한 결과가 정수형식이라 대입불가
	//eState = IDLE + ATT;
	
	iTest = IDLE + ATT;
	std::cout << iTest;
}