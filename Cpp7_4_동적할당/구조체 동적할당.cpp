#include<iostream>

using namespace std;

struct Person
{
	float weight;
	float height;
};

int main()
{
	//Person* person = new Person{ 74.1f,180.2f }; // 초기화 

	////person.weight 원래 이렇게 해줫다.
	//cout << (*person).weight << endl;
	//cout << person->height << endl;
	//// 포인트를 사용하여 가져올려면 이렇게 가져와야한다. 

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

	// 값으로만 복사 햇을 경우 안되겠지만, 
	// 주소째로 복사하기 때문에 가능하다
	
}