#include<iostream>

using namespace std;

void sub()
{
	for (int i = 0; i<3; ++i)
	{
		// int num = 0;
		// ++num;
		// cout << num << endl;
		// ���� ����� �޸𸮿��� �ٷ� �����. (�ڵ� �޸�)
		// ���� 1 , 1 , 1 ����� �� 

		static int num = 0;
		++num;
		cout << num << endl;
		// 1,2,3 
		// static �� ������ ���� �޸𸮰� �Ҵ� �ȴ�. 

		//int num;
		// �߰�ȣ �ȿ� �ִ� �߰�ȣ �� ���� ���� 
		//static int num1;

	}
}