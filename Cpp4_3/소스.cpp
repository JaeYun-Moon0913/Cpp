#include <iostream>

using namespace std;

int main()
{
	// and ������ &&
	int num0(10), num1(10);
	int num2(20), num3(30);

	if (num0 == num1 && num2 != num3) // ������ �켱���� 
		cout << "AND" << endl;

	// or ������ || 
	if (num0 == num1 || (num2 == num3))
		cout << "OR" << endl;

	//&& �� || �켱������ �ٸ� 
	if (true || false && false)
		cout << "OK" << endl;
	// and �����ڰ� �켱������ �켱�� ���� or ������ ���� �ϰ� ������ 
	// ()�� �ļ� �켱������ ���� 

	// and �����ڴ� �տ��� false �� ������ �ڿ��� ����� ���� 
	// short circuit evaluation
	// bool result = printf("") && printf("ABC");
	// ABC �� ����� �ȵ� 

	bool result = printf("1\n") && printf("ABC\n");
	// �̷��� ����� �� 

	bool r = true;
	r = !r;
	cout << r << endl;

	cout.setf(ios_base::boolalpha);
	cout << !10 << endl;

}
