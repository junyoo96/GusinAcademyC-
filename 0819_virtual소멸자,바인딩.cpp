#include "stdafx.h"

class CObj
{
public:
	//���� �����Լ� : �ڽĿ��� �ݵ�� �������̵��ϰԲ� ����� ����
	//��ü�� ���ٴ� ���� =0���� ǥ��
	//���������Լ��� �� �ϳ��� �����Ѵٸ� �� Ŭ������ �߻�Ŭ������� �Ҹ�(��ü ������ �Ұ���)
	//virtual void Update() = 0;

	virtual void Render()
	{
		std::cout << "�θ��� ����" << std::endl;
	}
};
class CPlayer : public CObj
{
public:
	virtual void Update()
	{
		std::cout << "dd" << std::endl;
	}
	virtual void Render()
	{
		std::cout << "�ڽ��� ���� " << std::endl;
	}
};

void main()
{
	//�����Լ��� ���� ����
	//Virtual pointer, Virtual Table : ���� Ŭ���� ���ο� �� �ϳ��� �����Լ��� �����Ѵٸ� �����Ϸ��� Virtual pointer, Virtual Table�� ����	
	//�׸��� Virtual Table���� ������ ȣ��Ǿ�� �� �Լ��� ��ġ ������ ��� ����

	//�ƹ��͵� ���� �� Class�� ũ��� 1byte������
	//virtual������ �� �Լ��� ������� 4byte�� ��
	std::cout << sizeof(CPlayer) << std::endl;
	
	//�� ������ CPlayer�� virtual pointer(4byte)�� ���� �Ǳ� ������ �׷�
	//pPlayer�� ����Ű�� ���� virtual pointer�̰�, �� virtual pointer�� virtual table(virtual����� �Լ����� �ִ°�)�� ����Ű�Ե�
	//����, runtime�������� ���� ����Ű�� �ִ� ��ü�� ���� virtual�Լ��� ȣ���ϰԵ�
	CObj* pPlayer = new CPlayer;
	pPlayer->Render();
	
	//�߻�Ŭ������ ��ü �����Ұ�, ��ü ������ ������ ��밡��
	//CObj obj;  ,  CObj obj=new CObj; (X)
	//CObj* obj; (O)

	//Binding(���ε�)
	//���α׷��� ��������� ������ �������ִ� ��
	//���� ���, �Լ��� �����Ϸ��� �Լ��� ȣ�� ��ġ�� �Լ��� ��ġ�� �޸� ������ ����Ǿ����
	//�� ����, �����Ű�� ���� ���ε�

	//���� ���ε� - ������ �������� �̹� ��������� ������ �����Ǵ� ���� �ǹ�
	//���� ���ε� - runtime �������� ��������� ������ ���� ex)��ǥ���� ���� �Լ� �������̵�
	
}