#include<iostream>

using namespace std;

void sub3()
{
	//int* pNum = new int(123);
	//int* pNum1 = pNum;

	//cout << *pNum << endl; // 123 
	//delete pNum;

	//cout << *pNum << endl; //? //정상 실행 안됨 
	//cout << *pNum1 << endl; //위와 같음

	//delete pNum; // 두 번 삭제하면 오류가 나온다. 
	//// 유효하지 않은 포인터 댕글링포인터라고 함 

	/*int* pNum; 
	{
		int n = 10;
		pNum = &n;
	}

	cout << *pNum << endl;*/
	// 정상 실행은 되도 위험 하다. 자동 메모리인 n 이  해제가 되었기 때문에 

	int s;
	cin >> s;
	int* arr = new int[s] {1, 2, 3};
	// 동적 배열 할당 

	delete[] arr; 
	// 삭제 방법 다름 

}