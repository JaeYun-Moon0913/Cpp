// Switch �� 
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
	// char ������ 1-byte ����(integer)��, ASCII code ���ڷ� �ؼ��Ѵ�. 
	cin >> num;

	switch (num) // �׻� �������̿��� �Ѵ�? 'a' : O , "a" : X
		// switch �� �ȿ��� �ʱ�ȭ �ϸ� ���� ��Ȯ�� ������ �� �𸣰ٴ�. (���� �ߺ� ����?) 
	{
	case 'A':
		cout << "convert A" << endl;
		[[fallthrough]]; 
		// break�� �ǵ������� ���� [[fallthrough]];�� ��Ÿ����. 
		// ���������ε� ������ �� ���� �ֱ� ������ 
	case 'a':
		cout << "You selected Kimch" << endl;
		break;
		// break ���� �Ʒ� case 2 �� ���� ���� 

	case 'b':
		cout << "You selected Korean BBQ" << endl;
		break;

	case 'c':
		cout << "Yot selected Chichen" << endl;
		break;

	default:
		cout << "Invalid Input" << endl;
		// default �� �߰��� �ִ´ٸ� break ������� 
		// �������̶� break �� �ȳ־��� 
	}

	/*
	* if , switch ������ 
	* - �򰡸� ��� �ϴ����� ���� 
	* - if ������ �򰡸� �Ѵ�. if, else if , else 
	* - switch �� �ѹ� �򰡸� �Ѵ�. case, default 
	*/
}