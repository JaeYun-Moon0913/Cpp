#include<iostream>

using namespace std;

union Union
{
	int i;
	float f;
	double d; //8byte 최대 사이즈
}; // union 건너 뛰었지만.. 
// 안에 있는 변수들이 메모리 공간을 공유 

// 주소값이 왜 타입을 가지는 지 확인하기 위해 
void sub()
{
	Union u;

	// Union* ip = &u; //원래는 이렇게 되어야 함 
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

	// 타입을 맞춰야 하는 이유 
}