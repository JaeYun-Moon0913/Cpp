#include<iostream>

using namespace std;

void sub()
{
	int num = 146;
	int* pointer = &num; // 146을 저장하는 주소값 146이 int 기 때문에 int 형으로 초기화

	cout << num << endl;
	cout << pointer << endl; // 16진수 출력 ( num의 출력 ) 
	
	// dereferencing? 역참조 
	cout << "역 참조 *pointer : " << *pointer << endl;
	
	cout << "&num : " << &num << endl;

	//값 변경 
	*pointer = 100;
	cout << "*pointer = 100 했을 때 num 값 :  " << num << endl;
	cout << "*pointer = 100 했을 때  *pointer 값 :  " << *pointer << endl;

	cout << endl;
	// 주소값 할당 방법 
	int num1 = 147;
	int* pNum0 = &num1;
	int* pNum1 = &num1;
	int* pNum2 = pNum0;

	cout << " 주소값 " << endl;
	cout << num1 << endl;
	cout << *pNum0 << endl;
	cout << *pNum1 << endl;
	cout << *pNum2 << endl;

	cout << " 값 "<< endl;
	cout << &num1 << endl;
	cout << pNum0 << endl;
	cout << pNum1 << endl;
	cout << pNum2 << endl;

	cout << " 100으로 바꿨을 때 값 " << endl;
	num1 = 100;
	cout << num1 << endl; 
	cout << *pNum0 << endl;
	cout << *pNum1 << endl;
	cout << *pNum2 << endl;

	cout << endl;

	// 주소값을 넣어주지 않고 인티저 하나 넣었을 때 
	int* pNum3 = 0;
	cout << "주소값으로 0만 주었을 때 " << pNum3 << endl;
	// cout << "주소값으로 0만 주었을 때 값 " << *pNum3 << endl; // 위험함 
	// 유효한 주소가 아님 00000 , 출력조차 안됨 




		
}
/*
* Pointer 
* - 변수를 가리키는 변수 ( 메모리 주소를 가르키는 변수)
* - 메모리 주소를 가리키는 변수
* - 메모리 주소를 저장하고 있는 변수 
*/