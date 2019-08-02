#include "stdafx.h"	


class CCar
{
//���� ���� �����ڸ� �������
public:
	//��� �Լ�
	void Driving()
	{
		std::cout << "Driving" << std::endl;
	}
private:
	void Break()
	{
		std::cout << "Break" << std::endl;
	}
	//��� ����
	int m_iSpeed;
	int m_iSize;
	
};

void main()
{
	//Ŭ���� - ��ü�� �����ϴµ� �ʿ��� �����Ϳ� �����͸� �ٷ�� ����� �ѵ� ������� ��
	CCar tAvante;

	//����ü�� Ŭ������ ������ ���� - �������� ������ ����
	//����ü - default�� public
	//Ŭ���� - default�� private

	//���� ���� ������ - private, public, protected
	/*
	private - Ŭ���� �ܺ� ���� �Ұ�
	public  - ��� ���� ���
	protected - �ܺο����� ������ ���������� ��Ӱ��迡���� ���� ���
	*/


	//����ü�� �޸� �Ҵ��ϴ� ��ĵ� �Ȱ���(���� ū �ڷ��� ����)
	//����������� Ŭ������ ũ�⿡ ������ ��ħ
	//��������� �ƿ� ������ �⺻ 1byte���� ����
	std::cout << sizeof(CCar) << std::endl;

	//��ü ������ ������ ����� �� ����ü�� �Ȱ��� ->�����ڸ� ����ؼ� ����


	//Ŭ���� 4��Ӽ� - Information hiding, Encapsulation, Inheritance, Polymorphism
	/*
	Information hiding - �⺻ ��� ������ private���� �ξ� �ܺηκ��� ��ġ �ʴ� ������ ������ ���ڴٴ� �ǹ�, �Լ��� ���� �����͸� ���� �ϰڴٴ� ��
	
	Encapsulation - �����Ϳ� �����͸� �ٷ�� ����� �ϳ��� ���� �ܺηκ��� ����� ��

	Inheritance - Ŭ���� ���� ����� �����͸� ���Ѵٸ� ����� ���� ����� �����͸� ������ �� ����
				  �θ�� �ڽ� Ŭ�������� �������� ������ �߻��� ����
				  ������ ������ ����ȭ�� �Ͼ�� ���� �ö󰥼��� �߻�ȭ�� �Ͼ
	Polymorphism - ���� �̸����� ���� �ٸ� ����� �����ϴ� ��
	*/

}