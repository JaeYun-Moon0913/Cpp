#include<iostream>

using namespace std;

void sub()
{
	for (int i = 0; i<3; ++i)
	{
		// int num = 0;
		// ++num;
		// cout << num << endl;
		// 블럭을 벗어나면 메모리에서 바로 벗어난다. (자동 메모리)
		// 따라서 1 , 1 , 1 출력이 됨 

		static int num = 0;
		++num;
		cout << num << endl;
		// 1,2,3 
		// static 을 붙히면 정적 메모리가 할당 된다. 

		//int num;
		// 중괄호 안에 있는 중괄호 안 지역 변수 
		//static int num1;

	}
}