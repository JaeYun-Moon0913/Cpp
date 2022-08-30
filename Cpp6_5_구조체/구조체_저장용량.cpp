#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	struct Person // 구조체를 만든것 
		// Person 이란 자료형 
	{
		float height; // 4 byte
		float weight; // 4 
		char name[10]; // 10
		short grade; // 2 

		// 총 20 byte 
	};

	cout << "total byte : " << sizeof(Person) << endl;
	cout << "alignof : " << alignof(Person) << endl;

	struct alignas(16) Person1 // 구조체를 만든것 
		// 강제로 16의 배수로 바꿈 
		// 32로 나옴 
	{
		float height; // 4 byte
		short grade; // 2 
		float weight; // 4 
		char name[10]; // 10
		

		// 총 20 byte 
	};

	cout << "1 total byte : " << sizeof(Person1) << endl; // 24 byte
	cout << "1 alignof : " << alignof(Person1) << endl;

	struct Person2 // 구조체를 만든것 
	{
		float height; // 4 byte
		short grade; // 2 
		float weight; // 4 
		char name[10]; // 10


		// 총 24 byte 
	};

	cout << "2 total byte : " << sizeof(Person2) << endl; // 24 byte
	cout << "2 alignof : " << alignof(Person2) << endl;

	// 가장 큰 자료형 배수로 size 맞춘다 
	// 여기서 4인 이유는 char 은 사실상 1byte 나 다름없기 때문에
	// 
	// height, weight, name , grade 
	//   4        4      10     2      20byte 
	// 
	// height, grade ,weight, name
	//    4     2 (10)   4      10 (2)  32byte 
	//    4     2        4 (6)  10 (6)  32byte 
	// 대략 이런 식으로 

	// height, grade ,weight, name
	//    4      2 (2)   4      10 (2)  24byte 
}	// 컴파일 효과를 위해서 