// 구조체 
// 자료형 여러개 -> 배열 
// 여러 데이터형 사용 -> 구조체 

#include<iostream>
#include<cstring>

using namespace std;

int sub()
{
	struct Eyesight // 구조체 안에 구조체를 쓰기 위해서는 
		//안에 쓸 구조체를 먼저 써야 한다. 
	{
		float left;
		float right;
	};

	struct Person // 구조체를 만든것 
		// Person 이란 자료형 
	{
		float height;
		float weight;
		char name[10];
		short grade;
		Eyesight eyesight;

	};

	Person person = { 174.5f,67.8f,"David",1, {1.1f, 1.0f} };
	// 초기화 리스트를 줘도 됨 

	Person person1 = person; // 메모리도 copy 다 됨 

	person.height = 174.2;
	person.weight = 67.8;
	person.grade = 1;
	strcpy_s(person.name, 10, "David");

	cout << person.height << endl;
	cout << person.weight << endl;
	cout << person.grade << endl;
	cout << person.name << endl;
	cout << person.eyesight.left << endl;
	cout << person.eyesight.right << endl;

	cout << person1.height << endl;
	cout << person1.weight << endl;
	cout << person1.grade << endl;
	cout << person1.name << endl;
	cout << person1.eyesight.left << endl;
	cout << person1.eyesight.right << endl;

	Person persons[5];
	persons[0].grade = 1;

	cout <<"persons[0] : " << persons[0].grade << endl; //1 

	Person person2 = persons[1];
	person2.grade = 5;

	cout << "person1.grade : " << person2.grade << endl; //5 
	cout << " persons[1].grade : " << persons[1].grade << endl;//5 - > 아니다 


	// 주소 다름 
	cout << "person1.grade 주소 : " << &person2.grade << endl; //
	cout << " persons[1].grade 주소 : " << &persons[1].grade << endl;//5 

	// 해결방법
	// 파이썬 깊은 복사 느낌 
	Person& person3 = persons[1];
	person3.grade = 5;

	cout << "person3.grade : " << person3.grade << endl; //5 
	cout << " persons[1].grade : " << persons[1].grade << endl;//5 


	// 주소 같아짐 
	cout << "person3.grade 주소 : " << &person3.grade << endl;
	cout << " persons[1].grade 주소 : " << &persons[1].grade << endl;

	return 0;
}