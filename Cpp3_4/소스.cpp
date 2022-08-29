#include<iostream>
#include<limits>

using namespace std;

int main()
{
	int a; 
	cin >> a; 
	// Sanf 와는 다른 이유
	/*
	* scanf("%d",&a);
	* &를 붙이지 않음 : 함수 밖에서 변경 할때 사용하지만 
	* cin은 입력 받고 함수 안에서 바꿔주기 때문에 안해줘도 된다. 
	* 
	* 실패를 해도 쓰래기 값이 나오지 않고 0 이 나온다. (Default)가 0 
	*/
	cout << a;

	char ch;
	cin >> ch;
	cout << ch << endl;

	// cin.ignore(2); // scanf 와는 다르게 개행을 제거해주지만
	// 두개의 문자가 들어올 떈 못없애기 때문에 cin.ignore()을 사용하여 없애준다. 
	// 단, 여러가지를 없애지는 못함 cin.ignore(2)는 두개 무시한다. 
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
	// \n 개행이 나올 때 까지 무시한다. 

	cin >> ch; 
	cout << ch << endl;

}