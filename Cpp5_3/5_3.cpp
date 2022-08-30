// Switch 문 
#include <iostream>

using namespace std;
int main()
{
	cout << "What's your favorite food?" << endl;
	cout << "a)kimch" << endl;
	cout << "b)Korea BBQ" << endl;
	cout << "c)Chichen" << endl;
	cout << ">";

	char num;
	// char 변수는 1-byte 정수(integer)다, ASCII code 문자로 해석한다. 
	cin >> num;

	switch (num) // 항상 정수형이여야 한다? 'a' : O , "a" : X
		// switch 문 안에서 초기화 하면 좋다 정확한 이유는 잘 모르겟다. (변수 중복 방지?) 
	{
	case 'A':
		cout << "convert A" << endl;
		[[fallthrough]]; 
		// break를 의도적으로 뺀걸 [[fallthrough]];로 나타낸다. 
		// 문법적으로도 오류가 날 수도 있기 때문에 
	case 'a':
		cout << "You selected Kimch" << endl;
		break;
		// break 빼면 아래 case 2 번 까지 나옴 

	case 'b':
		cout << "You selected Korean BBQ" << endl;
		break;

	case 'c':
		cout << "Yot selected Chichen" << endl;
		break;

	default:
		cout << "Invalid Input" << endl;
		// default 를 중간에 넣는다면 break 써줘야함 
		// 마지막이라 break 를 안넣어줌 
	}

	/*
	* if , switch 차이점 
	* - 평가를 몇번 하는지의 차이 
	* - if 여러번 평가를 한다. if, else if , else 
	* - switch 는 한번 평가를 한다. case, default 
	*/
}