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
		std::cout << "삼각형 그리기" << std::endl;
	}
};
class CRectangle : public CFigure
{
public:
	virtual void Draw()
	{
		std::cout << "사각형 그리기" << std::endl;
	}
};
class CCircle :public CFigure
{
public:
	virtual void Draw()
	{
		std::cout << "원 그리기" << std::endl;
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