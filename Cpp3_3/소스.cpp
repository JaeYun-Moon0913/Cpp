#include<iostream>

using namespace std;

int main()
{
	cout.setf(ios_base::showpos);
	//setf : 플래그를 세팅한다. ios_base(범위지정자)안에 플래그가 세팅 되어 있다.
	cout << 1 << endl;
	cout << 2 << endl; // 계속 세팅이 되어있음

	cout.unsetf(ios_base::showpos); // 해제
	cout << 2 << endl;

	// boolen 
	cout << "#### boolen ####" << endl;
	cout << true << endl;
	cout << false << endl;

	cout.setf(ios_base::boolalpha);
	cout << true << endl;
	cout << false << endl;

	// 좌우정렬 
	cout.setf(ios_base::left, ios_base::adjustfield);
	/*두번쨰로 파라미터를 따로 넣어줘야함
	* 첫번쨰는 좌우 정렬, 가운데 정렬(internal)
	* 우클릭 후 정의로 이동 보면 자세히 나와 있음
	*/ 
	cout.width(10);
	cout << -10 << 20<<endl; // -10          20

	cout.setf(ios_base::internal, ios_base::adjustfield);
	cout.width(10);
	cout << -10 << 20 << endl; // -          1020

	//cout.setf(ios_base::hex, ios_base::basefield); // 10, 8 , 16진수 파악 가능 
	// cout<<16; 
	// 아래 방법은 다 똑같음 
	// cout<<hex<<16
	// 
	// hex(cout)
	//cout<<16 


}