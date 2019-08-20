#include "stdafx.h"

class CPoint
{
public:
	CPoint(){}
	CPoint(int x, int y)
		:m_iX(x), m_iY(y)
	{

	}
	//��ü�� ������ �� �ڵ����� �����Ǵ� 4���� �� �ϳ��� �ٷ� default���Կ�����
	//default ���� �������� ����
	CPoint operator=(CPoint& rPoint)
	{
		m_iX = rPoint.m_iX;
		m_iY = rPoint.m_iY;

		return *this;
	}
	CPoint& operator+(CPoint& rPoint)
	{
		CPoint tPoint;
		tPoint.m_iX = m_iX + rPoint.m_iX;
		tPoint.m_iY = m_iY + rPoint.m_iY;

		//tPoint.Render();

		return tPoint;
	}
	void Render()
	{
		std::cout << "X : "<< m_iX << ", Y : " << m_iY << std::endl;
	}
private:
	int m_iX;
	int m_iY;
};
void main()
{
	//������ �����ε�
	CPoint pt(100, 100);
	CPoint pt2(200, 200);
	CPoint pt3;
	pt3 = pt + pt2;
	pt.Render();
	pt2.Render();
	pt3.Render();
}