#include <iostream>

using namespace std;

void sub()
{
	int nums[] = { 1,2,3 }; 
	cout << nums << endl; // �ּҰ��� ���� 

	int* pNums = nums; // &nums �ȵ� 
	cout << pNums << endl; // ���� ���� �ּҰ��� ���´�. 

	// �迭�� �����ͷ� ��ȯ�Ǵ� �� (������?)

	cout << sizeof(nums) << endl; //12 byte - �迭 �ȿ� �ִ� ������ �� �� 
	cout << sizeof(pNums) << endl; //4 byte - �ܼ��� ������ ũ�� �̴�. 

	// ���� ���� �������� �ٸ� type Ȯ�ο��� Ȯ�� ���� 
	cout << &nums << endl; // int�� 3�� ¥�� �迭 Ÿ�� 
	cout << &nums[0] << endl; // = cout << nums << endl;
	// �迭�� �迭�� 0��° �ּҸ� �������ش�.
	// int�� pointer �� ���� ���ִ°� 


	cout << typeid(1).name() << endl; // Ÿ���� �˷��ִ� �� 
	// python type() 

	// type Ȯ�� 
	cout << typeid(nums).name() << endl;
	cout << typeid(&nums).name() << endl;
	cout << typeid(&nums[0]).name() << endl;

	// ����� ������.. ���Ŀ� cpp�� ��� �� �� �����.

}