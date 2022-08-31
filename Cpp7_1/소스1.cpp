#include<iostream>

using namespace std;

int main()
{
	const int num = 10; // 상수값 지정 
	// num = 20; // 이렇게 변환 안됨 

	// 위 처럼 포인터도 가능 
	int num1 = 10;
	// const 위치에 따른 기능

	//const int* pnum = &num1; 
	// *pnum을 이용해서 값을 못바꿈
	// int const * pnum = &num1; // *pnum을 이용해서 값을 못바꾸는 것 
	int* const pnum = &num1; // 주소를 못바꾸게 하는 것 
	// const int* const pnum = &num; // 주소, 값 둘다 못 바꿈 
	cout <<"변경 전 : " << num1 << endl;
	cout <<"변경 전 : " << &num1 << endl;

	*pnum = 20;

	// 주소값을 못 바꾸는 것이 아닌 
	// 가르키는  값을 못 바꿈 

	cout << "변경 후 : "<< num1 << endl;
	cout << "변경 후 : "<< & num1 << endl;

}// 한번 다 돌려보기 