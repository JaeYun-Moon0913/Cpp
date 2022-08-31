#include <iostream>

using namespace std;

int main()
{
	int nums[] = { 1,2,3 };
	int* pNums = nums; // &nums �ȵ� 

	cout << pNums[0] << endl; // 1 
	cout << pNums[1] << endl; // 2
	cout << pNums[2] << endl; // 3
	cout << endl;

	cout << pNums << endl; // �ּҰ� 
	cout << pNums + 1 << endl; // ���� 4�� ���̰� �� 
	cout << pNums + 2 << endl; // +1 �� �������� ������ ��ŭ ���ϴ� ���� 
	cout << endl;

	cout << *pNums << endl; // 1
	cout << *(pNums + 1) << endl; // 2  
	cout << *(pNums + 2) << endl; // 3 
	cout << endl;

	cout << *nums << endl; 
	cout << *(nums + 1) << endl; 
	cout << *(nums + 2) << endl;
	cout << endl;

	cout << *&nums[0] << endl;
	cout << *(&nums[0] + 1) << endl;
	cout << *(&nums[0] + 2) << endl;
	cout << endl;

	// �����ʹ� �ڱ� �ڽ��� �� �� �� �ִ�. 
	cout << *pNums << endl; // 1 
	pNums++;
	cout << *pNums << endl; // 2 
	// �迭�� �ڱ� �ڽ��� �� �� �� ����. 

}