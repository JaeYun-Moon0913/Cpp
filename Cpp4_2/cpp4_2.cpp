//비교관계 연산자
#include<iostream>

using namespace std;

int main()
{
	int num0 = 10, num1(10);
	if (num0 == num1)
		cout << "num0==num1" << endl;
	// = : 할당 연산자 
	// if 문에 == 말고 = 를 사용하면 위 상황은 된다. 
	// 왜? 가로 안이 10이 되기 때문에 

	// != 다르면 true 
	// < 왼쪽이 크냐?, > 오른쪽이 크냐 <= , >= 
	// 대부분 결과값은 Boolen 으로 나온다. 
	// 단 하나 다른데 <=> 이게 생겼는데... -> 20년도 Cpp 이라. 
	// <=> : what, how 처럼 묻는것 관계를 묻는 것 
	// 앞에서 뒤에꺼를 뺀라고 생각하면 편하다. cout이 출력을 못한다. 
}