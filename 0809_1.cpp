#include "stdafx.h"	

class CAxe
{
public:
	void Swing()
	{
		std::cout << "도끼를 휘두른다" << std::endl;
	}
protected:
	int m_iAtt;
	int m_iDurability;
};

class CSword
{
	void Swing()
	{
		std::cout << "검을 휘두른다" << std::endl;
	}
protected:
	int m_iAtt;
	int m_iDurability;
};

//has~a : ~를 가지고 있다 , 왠만하면 다중상속은 모호성을 발생시키기 때문에 has-a관계를 사용 안함, 대신 포함관계(멤버변수로서 갖음) 사용!

class CPlayer : public CAxe, public CSword //다중상속
{
private:
	int m_iHp;
	int m_iMaxHp;
};

//포함관계
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