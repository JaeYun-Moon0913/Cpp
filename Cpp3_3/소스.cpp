#include<iostream>

using namespace std;

int main()
{
	cout.setf(ios_base::showpos);
	//setf : �÷��׸� �����Ѵ�. ios_base(����������)�ȿ� �÷��װ� ���� �Ǿ� �ִ�.
	cout << 1 << endl;
	cout << 2 << endl; // ��� ������ �Ǿ�����

	cout.unsetf(ios_base::showpos); // ����
	cout << 2 << endl;

	// boolen 
	cout << "#### boolen ####" << endl;
	cout << true << endl;
	cout << false << endl;

	cout.setf(ios_base::boolalpha);
	cout << true << endl;
	cout << false << endl;

	// �¿����� 
	cout.setf(ios_base::left, ios_base::adjustfield);
	/*�ι����� �Ķ���͸� ���� �־������
	* ù������ �¿� ����, ��� ����(internal)
	* ��Ŭ�� �� ���Ƿ� �̵� ���� �ڼ��� ���� ����
	*/ 
	cout.width(10);
	cout << -10 << 20<<endl; // -10          20

	cout.setf(ios_base::internal, ios_base::adjustfield);
	cout.width(10);
	cout << -10 << 20 << endl; // -          1020

	//cout.setf(ios_base::hex, ios_base::basefield); // 10, 8 , 16���� �ľ� ���� 
	// cout<<16; 
	// �Ʒ� ����� �� �Ȱ��� 
	// cout<<hex<<16
	// 
	// hex(cout)
	//cout<<16 


}