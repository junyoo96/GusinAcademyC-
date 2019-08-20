#include "stdafx.h"

class CFigure
{
public:
	virtual void Draw() = 0;
};
class CTriangle : public CFigure
{
public:
	virtual void Draw()
	{
		std::cout << "�ﰢ�� �׸���" << std::endl;
	}
};
class CRectangle : public CFigure
{
public:
	virtual void Draw()
	{
		std::cout << "�簢�� �׸���" << std::endl;
	}
};
class CCircle :public CFigure
{
public:
	virtual void Draw()
	{
		std::cout << "�� �׸���" << std::endl;
	}
};
void main()
{
	CFigure* pTriangle = new CTriangle;
	CFigure* pRect = new CRectangle;
	CFigure* pCir = new CCircle;

	pTriangle->Draw();
	pRect->Draw();
	pCir->Draw();
}