#include<iostream>

using namespace std;

int main()
{
	const int num = 10; // ����� ���� 
	// num = 20; // �̷��� ��ȯ �ȵ� 

	// �� ó�� �����͵� ���� 
	int num1 = 10;
	// const ��ġ�� ���� ���

	//const int* pnum = &num1; 
	// *pnum�� �̿��ؼ� ���� ���ٲ�
	// int const * pnum = &num1; // *pnum�� �̿��ؼ� ���� ���ٲٴ� �� 
	int* const pnum = &num1; // �ּҸ� ���ٲٰ� �ϴ� �� 
	// const int* const pnum = &num; // �ּ�, �� �Ѵ� �� �ٲ� 
	cout <<"���� �� : " << num1 << endl;
	cout <<"���� �� : " << &num1 << endl;

	*pnum = 20;

	// �ּҰ��� �� �ٲٴ� ���� �ƴ� 
	// ����Ű��  ���� �� �ٲ� 

	cout << "���� �� : "<< num1 << endl;
	cout << "���� �� : "<< & num1 << endl;

}// �ѹ� �� �������� 