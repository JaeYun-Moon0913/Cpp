#include<iostream>

using namespace std;

int main()
{
	const int num = 10; // ����� ���� 
	// num = 20; // �̷��� ��ȯ �ȵ� 

	// �� ó�� �����͵� ���� 
	int num1 = 10;
	// const ��ġ�� ���� ��� 
	const int* pnum = &num1; // ���� ���ٲٴ� �� 
	// int const * pnum = &num1; // ���� ���ٲٴ� �� 
	// int* const pnum = &num1; // �ּ� ���� ���ٲٰ� �ϴ� �� 
	// const int* const pnum = &num; // �ּ�, �� �Ѵ� �� �ٲ� 

	int num2 = 20;
	pnum = &num2; 

	// �ּҰ��� �� �ٲٴ� ���� �ƴ� 
	// ����Ű��  ���� �� �ٲ� 


}// �ѹ� �� �������� 