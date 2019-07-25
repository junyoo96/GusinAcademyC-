#include <iostream>

//enum(열거체) - 사용자 정의 자료형, 정수형식의 상수 기질을 갖음(실수를 대입하지 못함)
//플레이어의 상태값에 주로 사용
enum STATE
{
	//명시하지 않아도 숫자를 부여받음 (0부터 순서대로 증가)
	//숫자를 명시할 수 있음 , 그럼 그 다음부터는 그 숫자의 다음숫자가 대입됨
	IDLE,RUN=9,ATT,PAIN
};

void main()
{
		STATE eState = IDLE;

		//enum인 IDLE이 정수를 저장하고 있기 때문에 정수형 변수에 저장 가능
		int iTest = IDLE;
		//그 반대는 안됨!
		eState = iTest;

	switch (eState)
	{
	case IDLE:
		std::cout << "IDLE" << std::endl;
		break;
	case RUN:
		std::cout << "RUN" << std::endl;
		break;
	case ATT:
		std::cout << "ATT" << std::endl;
		break;
	case PAIN:
		std::cout << "PAIN" << std::endl;
		break;
	}
	
}