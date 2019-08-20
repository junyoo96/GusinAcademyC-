// 0820.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

class CObj
{
public:
	virtual void Render()
	{

	}
};

class CPlayer : public CObj
{

};

class CStudent
{

};


int main()
{
	//dynamic_cast

	//�� ���¸� ��ĳ���ö���
	//��ĳ������ �ǰ�ü�� �ڽ��̰� ��ü �����Ͱ� �θ��� ���� ����
	CObj* pObj = new CPlayer;
	//virtual Ű���带 �������� �־�� �Ǵ��� �ȵǴ��� �˼� ����(�����Լ��� �ִ��ĵ� Ȯ����)
	// �θ� �������� ĳ���� �ߴ� �� �ٽ� �ڽ��������� �ٿ� ĳ���� �ϴ���
	CPlayer* pPlayer = dynamic_cast<CPlayer*>(pObj);

	//�Ҿ����� �ٿ�ĳ���� ����(�� ��ü�� �θ�ü�ΰ��� �ڽ� ��ü�� �ٿ�ĳ������ ��)
	//�������� ������ runtime�� nullptr��ȯ
	CObj* pObj = new CObj;
	CPlayer* pPlayer = dynamic_cast<CPlayer*>(pObj);

	//=================================================
	//const_cast<>  : const�� Ǯ������� Ű����
	//const_cast�� ����������,���۷��������϶��� ��밡��
	int i = 0;
	const int* ptr = &i;
	int* ptr3 = const_cast<int*>(ptr);

	//=================================================
	// reinterpret_cast<> : C��Ÿ�ϰ� �Ȱ��� ������ ����ȯ ����
	// ����������, ���۷��� ������ �� ��밡��
	// ����, �̰� ����ҰŸ� C��Ÿ���� ����ȯ�� ����ϴ°� ����
	CPlayer* pPlayer = new CPlayer;
	CStudent* pStu = reinterpret_cast<CStudent*>(pPlayer);

    return 0;
}

//�� virtual �Լ��� �־�� dynamic_cast�� ��������