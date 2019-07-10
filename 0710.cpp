#include<iostream>

void main()
{
	//switch에 정수받게 못들어가는 이유는 실수가 들어갈경우 오차가 발생할 수 있기 때문
	//들어갈수있는거는 정수,char(컴퓨터는 정수로 받아들여서)

	std::cout << 'a';	
	
	//**switch구문 or loop문 안에서만 break사용가능
	//함수에서 break;사용하면 컴파일오류남

	//switch구문내에 switch구문을 사용할 수 있지만 가독성이 떨어짐

	switch (1)
	{
		//케이스 구문에는 오로지 상수(정수 or char)만 들어올 수 있음
	case 1:
		std::cout << "1";
		break;
	//중괄호로 묶어줄수 있으면, 여기서 변수 선언하면 life cycle은 중괄호내에서만 사용
	case 'a':
	{
		std::cout << "2";
		break;
	}
		
	//모든 case에 해당하지 않을 때 
	default:
		break;
	}

	//=================================================
	//반복문 - while, do~while, for
	while (true)
	{
		if (true)
		{
			//가장 가까운 반복문 빠져나가는 역할
			break;
		}
	}

}