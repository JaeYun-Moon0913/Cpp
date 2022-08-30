#include <iostream>

using namespace std;

int main()
{
	// and 연산자 &&
	int num0(10), num1(10);
	int num2(20), num3(30);

	if (num0 == num1 && num2 != num3) // 연산자 우선순위 
		cout << "AND" << endl;

	// or 연산자 || 
	if (num0 == num1 || (num2 == num3))
		cout << "OR" << endl;

	//&& 와 || 우선순위가 다름 
	if (true || false && false)
		cout << "OK" << endl;
	// and 연산자가 우선순위가 우선임 따라서 or 연산을 먼저 하고 싶으면 
	// ()를 쳐서 우선순위를 주자 

	// and 연산자는 앞에가 false 가 나오면 뒤에껄 계산을 안함 
	// short circuit evaluation
	// bool result = printf("") && printf("ABC");
	// ABC 가 출력이 안됨 

	bool result = printf("1\n") && printf("ABC\n");
	// 이러면 출력이 됨 

	bool r = true;
	r = !r;
	cout << r << endl;

	cout.setf(ios_base::boolalpha);
	cout << !10 << endl;

}
