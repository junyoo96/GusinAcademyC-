#include <iostream>

//enum(����ü) - ����� ���� �ڷ���, ���������� ��� ������ ����(�Ǽ��� �������� ����)
//�÷��̾��� ���°��� �ַ� ���
enum STATE
{
	//������� �ʾƵ� ���ڸ� �ο����� (0���� ������� ����)
	//���ڸ� ����� �� ���� , �׷� �� �������ʹ� �� ������ �������ڰ� ���Ե�
	IDLE,RUN=9,ATT,PAIN
};

void main()
{
		STATE eState = IDLE;

		//enum�� IDLE�� ������ �����ϰ� �ֱ� ������ ������ ������ ���� ����
		int iTest = IDLE;
		//�� �ݴ�� �ȵ�!
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