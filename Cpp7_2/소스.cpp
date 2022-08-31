#include <iostream>

using namespace std;

void sub()
{
	int nums[] = { 1,2,3 }; 
	cout << nums << endl; // 주소값이 나옴 

	int* pNums = nums; // &nums 안됨 
	cout << pNums << endl; // 위와 같은 주소값이 나온다. 

	// 배열이 포인터로 변환되는 것 (디케이?)

	cout << sizeof(nums) << endl; //12 byte - 배열 안에 있는 원소의 총 합 
	cout << sizeof(pNums) << endl; //4 byte - 단순히 변수의 크기 이다. 

	// 같은 값이 나오지만 다름 type 확인에서 확인 가능 
	cout << &nums << endl; // int가 3개 짜리 배열 타입 
	cout << &nums[0] << endl; // = cout << nums << endl;
	// 배열은 배열의 0번째 주소를 리턴해준다.
	// int의 pointer 를 리턴 해주는것 


	cout << typeid(1).name() << endl; // 타입을 알려주는 것 
	// python type() 

	// type 확인 
	cout << typeid(nums).name() << endl;
	cout << typeid(&nums).name() << endl;
	cout << typeid(&nums[0]).name() << endl;

	// 어려운 개념임.. 추후에 cpp을 깊게 할 때 배우자.

}