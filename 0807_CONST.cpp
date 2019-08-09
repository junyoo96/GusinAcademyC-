#include "stdafx.h"
#include "Const.h"


CConst::CConst()
// �̰��� �ٷ� �̴ϼ� ������ ��� ����.  �ٿ��� ������ �ʱ�ȭ�� �ص� �ǰ� ��ó�� ���پ� �ᵵ ����. �ڵ� ��Ÿ����. 
	:m_iConst(2200) 
	,m_a(10)
	,m_b(20)
{
	// �̰��� �ʱ�ȭ�� �ƴ� �����̴�. �̹� ��ü�� ������ �� �� ���� ȣ��Ǳ� ����. 
	//m_iConst = 200; 

	// �̴ϼ� �������� ����Ǵ� ���� : ��ü ���� -> �޸� �Ҵ� -> Initialize ȣ�� -> ������ ȣ�� ;
	
	// �̴ϼȶ������� ����ϴ� ���� 
	// �ʱ�ȭ�ϴ� ����� ��Ȯ�� �ν��� �� �ִ�. 

	// ���ɻ� �ణ�� ������ �ִ�. ����� ���ÿ� �ʱ�ȭ�� �̷������ ���°� ���̳ʸ� ���·� �����ϴٺ��� 
	// ���� �ణ �� �����ٴ� ������ �ִ�. 

	// ���������� �̴ϼȶ������� ����ϰ� �ʹٸ� ,(�޸�)�� �̾� ������ �ȴ�. 

}


CConst::~CConst()
{
}

void CConst::ShowConst()
{
	cout << m_iConst << endl;
}

void CConst::TestNonConstant()
{
	cout << m_iConst << endl; 
	m_a = 99; 
	cout << m_a << endl; 
	cout << m_b << endl; 
}

void CConst::TestConstant() const
{
	cout << m_iConst << endl;
	// �Լ� �ȿ� ������ �͵��� ���� const ������ ���. �׷��� �ؿ� ó�� ������ ������ �Ұ� �ϴ�. 

	//m_a = 99;
	cout << m_a << endl;
	cout << m_b << endl;
	// const �Լ� �ȿ����� �Ϲ� �Լ��� ȣ�� �� �� ����. 
	//�Ϲ� �Լ� �ȿ��� �����Ͱ� ���� �� ���� �ֱ� ����. 
	//TestNonConstant();
}

void CConst::TestConstant()
{// Const Ű����ε� �Լ� �����ε� ����. 
	cout << m_iConst << endl;
	m_a = 9888;
	cout << m_a << endl;
	cout << m_b << endl;
}
