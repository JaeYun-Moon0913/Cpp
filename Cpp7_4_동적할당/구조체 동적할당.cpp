#include<iostream>

using namespace std;

struct Person
{
	float weight;
	float height;
};

int main()
{
	//Person* person = new Person{ 74.1f,180.2f }; // �ʱ�ȭ 

	////person.weight ���� �̷��� �آZ��.
	//cout << (*person).weight << endl;
	//cout << person->height << endl;
	//// ����Ʈ�� ����Ͽ� �����÷��� �̷��� �����;��Ѵ�. 

	Person* persons[2] = {
		new Person{56.f,174.3f},
		new Person{74.2f, 184.f}
	};
	
	for (Person* person : persons)
	{
		person->weight = 0.0f;
	}

	for (Person* person : persons)
	{
		cout << person->weight << endl;
	}

	// �����θ� ���� ���� ��� �ȵǰ�����, 
	// �ּ�°�� �����ϱ� ������ �����ϴ�
	
}