#include<iostream>

using namespace std;

void sub3()
{
	//int* pNum = new int(123);
	//int* pNum1 = pNum;

	//cout << *pNum << endl; // 123 
	//delete pNum;

	//cout << *pNum << endl; //? //���� ���� �ȵ� 
	//cout << *pNum1 << endl; //���� ����

	//delete pNum; // �� �� �����ϸ� ������ ���´�. 
	//// ��ȿ���� ���� ������ ��۸������Ͷ�� �� 

	/*int* pNum; 
	{
		int n = 10;
		pNum = &n;
	}

	cout << *pNum << endl;*/
	// ���� ������ �ǵ� ���� �ϴ�. �ڵ� �޸��� n ��  ������ �Ǿ��� ������ 

	int s;
	cin >> s;
	int* arr = new int[s] {1, 2, 3};
	// ���� �迭 �Ҵ� 

	delete[] arr; 
	// ���� ��� �ٸ� 

}