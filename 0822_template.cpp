// 0822.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

//�Լ� ���ø� - ����
template<typename T>
T Add(T a,T b)
{
	return a + b;
}

//���ø� Ư��ȭ
template<>
const char* Add(const char* a, const char* b)
{
	int size = (strlen(a) + strlen(b)) + 1;
	char* tmp = new char[size];
	strcpy_s(tmp, size, a);
	strcat_s(tmp, size, b);

	return tmp;
}

//����ü ���ø�
template<typename T>
struct tagInfo
{
	T a;
	T b;
	T c;
};

//Ŭ���� ���ø�
template<typename T>
class CObj
{
public:
	CObj(T _a, T _b, T _c)
		:a(_a),b(_b),c(_c)
	{

	}
	void Render()
	{
		std::cout << a << "," << b << "," << c << std::endl;
	}
private:
	T a;
	T b;
	T c;
};

//�κ� ���ø� : Ŭ������ ������� ����Լ��� ���ø�ȭ �� �� ����
class CObjTwo
{
public:
	CObjTwo(int _a, int _b, int _c)
		:a(_a), b(_b), c(_c)
	{

	}
	template<typename T>
	void Render()
	{
		std::cout << a << "," << b << "," << c << std::endl;
	}
private:
	int a;
	int b;
	int c;
};

//���� �ڷ��� �̸� ���� �����ؼ� ����ϰ�, �ٸ� �ڷ����̸� ���� ���� ���
template<typename T>
void Test(T a)
{
	static int i = 0;
	++i;
	std::cout << i << std::endl;
}

int main()
{
	//���ø� �Լ�
	std::cout << Add<int>(1, 2) << std::endl;

	//���ø� �Լ� Ư��ȭ
	std::cout << Add("����", "�α�") << std::endl;

	//���ø� Ŭ����
	CObj<int> cobj(1, 2, 3);
	cobj.Render();


	//���ø� ����ü
	tagInfo<int> tagInfo;
	tagInfo.a = 1;
	tagInfo.b = 2;
	tagInfo.c = 3;
    return 0;

	//���ø� ���Ϻ���
	//Ŭ���� ���� ���ø� �Լ��� ������Ͼȿ��� ���� �� ������
	//(�и��Ǹ� �����ϴܰ迡�� ��Ŀ�� ���� h,cpp�� ���̱� ���̶� ���̶� ���ø� �Լ�����Ȱ��� �𸣱� ������ cpp���ϱ��� �߰����־�ߵǼ� ���ŷο�)
}

