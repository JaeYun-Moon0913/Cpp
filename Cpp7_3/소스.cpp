#include <iostream>
#include <cstring> 

using namespace std;

int main()
{
	char str0[] = "abcd";
	char* str1 = str0;

	const char* str2 = "hello";
	// const �� �Ⱥ����� �ȵȴ�. 
	// ��ȯ�� �Ǹ� �ȵǱ� ������ ���ڿ� Ÿ���� char const[6] 


	cout << str0 << endl;
	cout << str1 << endl;
}