#include<iostream>

using namespace std;

void sub()
{
	int num = 146;
	int* pointer = &num; // 146�� �����ϴ� �ּҰ� 146�� int �� ������ int ������ �ʱ�ȭ

	cout << num << endl;
	cout << pointer << endl; // 16���� ��� ( num�� ��� ) 
	
	// dereferencing? ������ 
	cout << "�� ���� *pointer : " << *pointer << endl;
	
	cout << "&num : " << &num << endl;

	//�� ���� 
	*pointer = 100;
	cout << "*pointer = 100 ���� �� num �� :  " << num << endl;
	cout << "*pointer = 100 ���� ��  *pointer �� :  " << *pointer << endl;

	cout << endl;
	// �ּҰ� �Ҵ� ��� 
	int num1 = 147;
	int* pNum0 = &num1;
	int* pNum1 = &num1;
	int* pNum2 = pNum0;

	cout << " �ּҰ� " << endl;
	cout << num1 << endl;
	cout << *pNum0 << endl;
	cout << *pNum1 << endl;
	cout << *pNum2 << endl;

	cout << " �� "<< endl;
	cout << &num1 << endl;
	cout << pNum0 << endl;
	cout << pNum1 << endl;
	cout << pNum2 << endl;

	cout << " 100���� �ٲ��� �� �� " << endl;
	num1 = 100;
	cout << num1 << endl; 
	cout << *pNum0 << endl;
	cout << *pNum1 << endl;
	cout << *pNum2 << endl;

	cout << endl;

	// �ּҰ��� �־����� �ʰ� ��Ƽ�� �ϳ� �־��� �� 
	int* pNum3 = 0;
	cout << "�ּҰ����� 0�� �־��� �� " << pNum3 << endl;
	// cout << "�ּҰ����� 0�� �־��� �� �� " << *pNum3 << endl; // ������ 
	// ��ȿ�� �ּҰ� �ƴ� 00000 , ������� �ȵ� 




		
}
/*
* Pointer 
* - ������ ����Ű�� ���� ( �޸� �ּҸ� ����Ű�� ����)
* - �޸� �ּҸ� ����Ű�� ����
* - �޸� �ּҸ� �����ϰ� �ִ� ���� 
*/