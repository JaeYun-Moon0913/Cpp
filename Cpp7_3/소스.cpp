#include <iostream>
#include <cstring> 

using namespace std;

int main()
{
	char str0[] = "abcd";
	char* str1 = str0;

	const char* str2 = "hello";
	// const 를 안붙히면 안된다. 
	// 변환이 되면 안되기 때문에 문자열 타입은 char const[6] 


	cout << str0 << endl;
	cout << str1 << endl;
}