// ���������
#include <iostream>

using namespace std;

int main()
{
	cout << 1 + 2<< endl;
	// + ��� ������, << ������ 
	cout << 40 - 32 / 2 << "==" << 24<<endl;

	int a, b, c;
	a = b = c = 10;

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	cout << -1 << endl; // ���� ������
	cout << 1 - 1 << endl; // ���� ������
	cout << -+-+-+1 << endl; // -1 

	int num(0);
	cout << "����,���� ������" << endl;
	cout << ++num<<endl; // ++, -- ������(����,���� ������) 
	cout << num++ << endl; // ������ ��Ű�� ������Ű�� �� ���� ��� (���̿�����)
	cout << num << endl;

	int x(10);
	x += 10;//�����Ҵ� ������ 
	cout << "x += 10 " << x << endl;

	cout << "������ ��" << endl;
	int z(10);
	cout << ++z + z++ << endl; //11 , 11
	cout << z << endl; //12
	// �� �Ŀ��� ���� ���ϰ� �ϸ� �ȵ�, ������ �������� ���� 
	// ���� �� �ٿ� �ѹ��� ���ϰ� ������ 

	//; ������ ������
	printf("%d%d\n", ++z, ++z); // 13,14 ->14,14 
	printf("%d\n", z); // 14 

}
