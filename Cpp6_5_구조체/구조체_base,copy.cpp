// ����ü 
// �ڷ��� ������ -> �迭 
// ���� �������� ��� -> ����ü 

#include<iostream>
#include<cstring>

using namespace std;

int sub()
{
	struct Eyesight // ����ü �ȿ� ����ü�� ���� ���ؼ��� 
		//�ȿ� �� ����ü�� ���� ��� �Ѵ�. 
	{
		float left;
		float right;
	};

	struct Person // ����ü�� ����� 
		// Person �̶� �ڷ��� 
	{
		float height;
		float weight;
		char name[10];
		short grade;
		Eyesight eyesight;

	};

	Person person = { 174.5f,67.8f,"David",1, {1.1f, 1.0f} };
	// �ʱ�ȭ ����Ʈ�� �൵ �� 

	Person person1 = person; // �޸𸮵� copy �� �� 

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
	cout << " persons[1].grade : " << persons[1].grade << endl;//5 - > �ƴϴ� 


	// �ּ� �ٸ� 
	cout << "person1.grade �ּ� : " << &person2.grade << endl; //
	cout << " persons[1].grade �ּ� : " << &persons[1].grade << endl;//5 

	// �ذ���
	// ���̽� ���� ���� ���� 
	Person& person3 = persons[1];
	person3.grade = 5;

	cout << "person3.grade : " << person3.grade << endl; //5 
	cout << " persons[1].grade : " << persons[1].grade << endl;//5 


	// �ּ� ������ 
	cout << "person3.grade �ּ� : " << &person3.grade << endl;
	cout << " persons[1].grade �ּ� : " << &persons[1].grade << endl;

	return 0;
}