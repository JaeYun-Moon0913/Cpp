#include<iostream>

using namespace std;

union Union
{
	int i;
	float f;
	double d; //8byte �ִ� ������
}; // union �ǳ� �پ�����.. 
// �ȿ� �ִ� �������� �޸� ������ ���� 

// �ּҰ��� �� Ÿ���� ������ �� Ȯ���ϱ� ���� 
void sub()
{
	Union u;

	// Union* ip = &u; //������ �̷��� �Ǿ�� �� 
	int* ip = (int*)&u;
	float* fp = (float*)&u;
	double* dp = (double*)&u;

	u.i = 1;
	cout << " u.i " << endl;
	cout << *ip << endl; // 1 
	cout << *fp << endl; // 1.4013e-~ 
	cout << *dp << endl;

	u.f = 1;
	cout << " u.f  " << endl;
	cout << *ip << endl; // 1065~~
	cout << *fp << endl; // 1
	cout << *dp << endl;

	u.d = 1;
	cout << " u.d  " << endl;
	cout << *ip << endl; // 0
	cout << *fp << endl; // 0
	cout << *dp << endl; // 1

	// Ÿ���� ����� �ϴ� ���� 
}