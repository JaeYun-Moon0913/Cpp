#include<iostream>
#include<limits>

using namespace std;

int main()
{
	int a; 
	cin >> a; 
	// Sanf �ʹ� �ٸ� ����
	/*
	* scanf("%d",&a);
	* &�� ������ ���� : �Լ� �ۿ��� ���� �Ҷ� ��������� 
	* cin�� �Է� �ް� �Լ� �ȿ��� �ٲ��ֱ� ������ �����൵ �ȴ�. 
	* 
	* ���и� �ص� ������ ���� ������ �ʰ� 0 �� ���´�. (Default)�� 0 
	*/
	cout << a;

	char ch;
	cin >> ch;
	cout << ch << endl;

	// cin.ignore(2); // scanf �ʹ� �ٸ��� ������ ������������
	// �ΰ��� ���ڰ� ���� �� �����ֱ� ������ cin.ignore()�� ����Ͽ� �����ش�. 
	// ��, ���������� �������� ���� cin.ignore(2)�� �ΰ� �����Ѵ�. 
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
	// \n ������ ���� �� ���� �����Ѵ�. 

	cin >> ch; 
	cout << ch << endl;

}