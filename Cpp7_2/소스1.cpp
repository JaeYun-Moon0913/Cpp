#include <iostream>

using namespace std;

int main()
{
	int nums[] = { 1,2,3 };
	int* pNums = nums; // &nums 안됨 

	cout << pNums[0] << endl; // 1 
	cout << pNums[1] << endl; // 2
	cout << pNums[2] << endl; // 3
	cout << endl;

	cout << pNums << endl; // 주소값 
	cout << pNums + 1 << endl; // 위와 4씩 차이가 남 
	cout << pNums + 2 << endl; // +1 은 포인터의 사이즈 만큼 더하는 거임 
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

	// 포인터는 자기 자신을 더 할 수 있다. 
	cout << *pNums << endl; // 1 
	pNums++;
	cout << *pNums << endl; // 2 
	// 배열은 자기 자신을 더 할 수 없다. 

}