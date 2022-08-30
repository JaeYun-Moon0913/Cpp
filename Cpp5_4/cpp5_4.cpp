/* for (초기화; 조건; 갱신)
*	반복할 구문 
* 1. 초기화 
* 2. 조건 (True ->3 , False -> 탈출)
* 3. 반복할 구문 수행 
* 4. 갱신 
* 5. 2번으로 돌아감 
*/

#include <iostream>

using namespace std;

int main() 
{
	//for (int i(0); i < 10; ++i)
		//cout << i << endl;
	for (;;)
	{
		cout << "Food" << endl;
		cout << "1)kimch" << endl;
		cout << "2)bbq" << endl;

		bool needToBreak = false; // if 문을 이용해서 for 문을 종료 
		// 없애면 멈추지 않음 
		
		int num;
		cin >> num;
		switch (num)
		{
		case 1 :
			cout << "Kimch" << endl;
			needToBreak = true; // for 문을 종료 하기위해 추가 
			break;
			
		case 2:
			cout << "BBQ" << endl;
			needToBreak = true;
			break; // 여기있는 break로는 for 문이 끝나지 않기 때문에 
			// for 문은 계속 반복 된다. 
			
		}
		if (needToBreak)
			break; // for 문을 종료 하기위해 추가 
	}
	

}

// continue 와 break 차이 
// break : 바로 종료 
// continue : 갱신은 함 


// ####### if 문을 사용하지 않고 끝내는 방법 ##########
/*
for (;;)
{
	cout << "Food" << endl;
	cout << "1)kimch" << endl;
	cout << "2)bbq" << endl;

	int num;
	cin >> num;
	switch (num)
	{
	case 1:
		cout << "Kimch" << endl;
		needToBreak = true; // for 문을 종료 하기위해 추가 
		break;

	case 2:
		cout << "BBQ" << endl;
		needToBreak = true;
		break; // 여기있는 break로는 for 문이 끝나지 않기 때문에 
		// for 문은 계속 반복 된다. 

	default:
		continue; // 다시 하게 선택하게 돌아간다. 

	}
	break;  
}
*/
