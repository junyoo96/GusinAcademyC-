#include "stdafx.h"	

class CAxe
{
public:
	void Swing()
	{
		std::cout << "������ �ֵθ���" << std::endl;
	}
protected:
	int m_iAtt;
	int m_iDurability;
};

class CSword
{
	void Swing()
	{
		std::cout << "���� �ֵθ���" << std::endl;
	}
protected:
	int m_iAtt;
	int m_iDurability;
};

//has~a : ~�� ������ �ִ� , �ظ��ϸ� ���߻���� ��ȣ���� �߻���Ű�� ������ has-a���踦 ��� ����, ��� ���԰���(��������μ� ����) ���!

class CPlayer : public CAxe, public CSword //���߻��
{
private:
	int m_iHp;
	int m_iMaxHp;
};

//���԰���
class CPlayer
{
private:
	int m_iHp;
	int m_iMaxHp;
	CAxe m_tAx;
	CSword m_tSword;
public:
	void Swing()
	{
		m_tAx.Swing();
	}
};

void main()
{
	CPlayer player;
	player.Swing();
}