#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	struct Person // ����ü�� ����� 
		// Person �̶� �ڷ��� 
	{
		float height; // 4 byte
		float weight; // 4 
		char name[10]; // 10
		short grade; // 2 

		// �� 20 byte 
	};

	cout << "total byte : " << sizeof(Person) << endl;
	cout << "alignof : " << alignof(Person) << endl;

	struct alignas(16) Person1 // ����ü�� ����� 
		// ������ 16�� ����� �ٲ� 
		// 32�� ���� 
	{
		float height; // 4 byte
		short grade; // 2 
		float weight; // 4 
		char name[10]; // 10
		

		// �� 20 byte 
	};

	cout << "1 total byte : " << sizeof(Person1) << endl; // 24 byte
	cout << "1 alignof : " << alignof(Person1) << endl;

	struct Person2 // ����ü�� ����� 
	{
		float height; // 4 byte
		short grade; // 2 
		float weight; // 4 
		char name[10]; // 10


		// �� 24 byte 
	};

	cout << "2 total byte : " << sizeof(Person2) << endl; // 24 byte
	cout << "2 alignof : " << alignof(Person2) << endl;

	// ���� ū �ڷ��� ����� size ����� 
	// ���⼭ 4�� ������ char �� ��ǻ� 1byte �� �ٸ����� ������
	// 
	// height, weight, name , grade 
	//   4        4      10     2      20byte 
	// 
	// height, grade ,weight, name
	//    4     2 (10)   4      10 (2)  32byte 
	//    4     2        4 (6)  10 (6)  32byte 
	// �뷫 �̷� ������ 

	// height, grade ,weight, name
	//    4      2 (2)   4      10 (2)  24byte 
}	// ������ ȿ���� ���ؼ� 