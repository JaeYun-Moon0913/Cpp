// 산술연산자
#include <iostream>

using namespace std;

int main()
{
	cout << 1 + 2<< endl;
	// + 산술 연산자, << 연산자 
	cout << 40 - 32 / 2 << "==" << 24<<endl;

	int a, b, c;
	a = b = c = 10;

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	cout << -1 << endl; // 단항 연산자
	cout << 1 - 1 << endl; // 이항 연산자
	cout << -+-+-+1 << endl; // -1 

	int num(0);
	cout << "증가,감소 연산자" << endl;
	cout << ++num<<endl; // ++, -- 연산자(증가,감소 연산자) 
	cout << num++ << endl; // 증가는 시키되 증가시키기 전 값을 출력 (후이연산자)
	cout << num << endl;

	int x(10);
	x += 10;//복합할당 연산자 
	cout << "x += 10 " << x << endl;

	cout << "주의할 점" << endl;
	int z(10);
	cout << ++z + z++ << endl; //11 , 11
	cout << z << endl; //12
	// 한 식에서 값을 변하게 하면 안됨, 순서를 보장하지 않음 
	// 따라서 한 줄에 한번만 변하게 만들어라 

	//; 시퀀스 연산자
	printf("%d%d\n", ++z, ++z); // 13,14 ->14,14 
	printf("%d\n", z); // 14 

}
