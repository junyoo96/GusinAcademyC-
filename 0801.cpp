#include <iostream>

#define MyTRUE 0
#define ABCD 99

void main()
{
	//���Ǻ� ������ - ��ó���ܰ迡�� ������ ���θ� ������
//#if
//#ifdef
//#ifndef

//#�� ���� �ڵ�� ��ó�� �ܰ迡�� ó����
//#endif
//#endif
//#endif

	int iTest = 99;

//1. #if(���� ������)
//0�� �ƴϸ�(true��) �ȿ� �ڵ� ������, 0�̸� �ڵ� ������ x
//#if 0 /*1>iTest*/ /*���Ǻ� �����Ͽ��� ������ ������ ���� �� ����(������ �ȳ��� ������), ������ �ٸ��� ����(���Ǻ�������-��ó���ܰ�, ������ �����Ǵ� ����- Runtime) */
//	std::cout << "������ ��?" << std::endl;
//#endif

//#if MyTRUE /*1>iTest*/ /*���Ǻ� �����Ͽ��� ������ ������ ���� �� ����(������ �ȳ��� ������), ������ �ٸ��� ����(���Ǻ�������-��ó���ܰ�, ������ �����Ǵ� ����- Runtime) */
//	std::cout << "������ ��?" << std::endl;
//#elif 1
//	std::cout << "������ �ϴ°�?" << std::endl;
//#else
//	std::cout << "������ �ϴ�?" << std::endl;
//#endif


//2. ifdef - ���� ������ ��ũ�ΰ� �ִٸ� �ڵ� �����ض�
//#ifdef ABCD
//	std::cout << "�ڵ� ����" << std::endl;
//#endif

//�����δ� �̹� ���ǵǾ� �ִ� "_DEBUG"��� ��ũ�� ���
//_DEBUG ����� ����� �� ���ǵǾ� �ִ� ��ũ��
//#ifdef _DEBUG
//	std::cout << "debug���" << std::endl;
//#endif
	
//3. ifndef - ���� ������ ��ũ�ΰ� ���ٸ� �ڵ� �����ض�
#ifndef PBG
	std::cout << "PBG?" << std::endl;
#endif


}