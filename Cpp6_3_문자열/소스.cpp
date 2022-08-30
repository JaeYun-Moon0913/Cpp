#include<iostream>
#include<cstring> // strlen 을 사용하기 위해 
#pragma warning(disable:4996) // strcpy 보안상의 이유로 막은걸 푼 것. 

using namespace std;

int sub()
{
	// "abc" : 리터럴 문자열 
	cout << "리터럴 : abc" << endl;

	char str[] = "abc"; // 배열 
	cout << str << endl;
	cout << str[0] << endl;
	cout << str[1] << endl;
	cout << str[2] << endl;
	cout << sizeof(str) << endl; // size 가 4 

	cout << str[3] << endl; //  빈 공간 출력 

	// # 형변환 
	cout << "형 변환" << endl;
	cout << (int)str[0] << endl;
	cout << (int)str[1] << endl;
	cout << (int)str[2] << endl;
	cout << (int)str[3] << endl;// 0 출력 , null 문자 
	// 이게 있어야 문자열이 된다. 종료하는 지점이라고 판단함 
	cout << "strlen :" << strlen(str) << endl; // 3출력
	cout << str << endl; 

	cout << "null 문자 확인 " << endl;
	cout << (int)str[0] << endl;
	cout << (int)str[1] << endl;
	str[1] = 0; // null 문자 추가
	cout << (int)str[2] << endl;
	cout << (int)str[3] << endl;
	cout << "strlen :"<< strlen(str) << endl; // 1출력

	cout << str << endl;

	// # null 문자 없애기 
	cout << "null 문자 없애기" << endl;
	char str1[] = "abc";
	str1[3] = 'd';

	cout << str1 << endl; // 우연히 null문자를 만나기 전까지 출력 abcd~~~

	// # 같은지 비교하기 
	cout <<"주소값 비교" << endl;
	char str2[] = "hello";
	char str3[] = "hello";

	if (str2 == str3) // str2, str3 는 주소값을 나타내기 때문에 false 로 나옴 
		// 하고 싶은 건 안의 내용물을 알고 싶음 
		cout << "True" << endl;

	int result = strcmp(str2, str3);
	cout << result << endl; // 0이 나오면 문자가 같은것 
	// char str3[100] = "hello" 이런식으로 배열의 길이가 달라도 같다고 판단한다. 
	
	char str4[] = "hello";
	char str5[] = "hell";

	int result2 = strcmp(str4, str5);
	cout << result2 << endl; // 1 출력 

	char str6[] = "hel";
	char str7[] = "hell";

	int result3 = strcmp(str6, str7);
	cout << result3 << endl; // -1 출력 

	//# 문자열 복사 
	char str8[] = "bye";
	char str9[100];

	// C 타입의 문자열 이다. 
	strcpy(str9, str8); // 사이즈 이슈 때문에 막힘 
	// 사이즈가 다를 시 원하지 않은 메모리를 가져와 사용할 수 있으므로 위험
	cout << "strcpy : " << str9 << endl;
	
	// C 타입의 문자열
	//strcat(str6, str7);
	//cout << str6 << endl;
	// 출력 : helhell 

	//# type 바꾸기 
	// 사실 여기서 쓴 str 은 문자열이다. 
	char str10[] = "1";
	int num = atoi(str10); 
	// float 형으로 바꿀 때 float num = atof(str10); 

	cout << "type 변환 str -> int : " << num << endl;

	//  int 에서 str 로 
	int num1 = 100;
	char str11[100];

	sprintf(str11, "%d %d", num1, num1);
	cout << "type 변환 int -> str" << str11 << endl;
	// 그냥 쓰는 느낌이다.

	// # 문자열 받는 방법 
	char strinput[6];
	cin >> strinput;
	cout << "입력 받기 출력 : " << strinput << endl;
	// 초기화 할때 사이즈 주의 - 다른 메모리 가져오기 때문에 문제 생길 수 있음 

	char strinput1[100];
	cin >> strinput1;
	cout << "입력 받기 출력 : " << strinput1 << endl;

	char strinput2[100];
	cin >> strinput2;
	cout << "입력 받기 출력 : " << strinput2 << endl;
	// a b 이렇게 공백을 주고 입력 시 두개 다 따로 입력들어감 
	// 단, 하나면 하나에 a b 이렇게 출력 됨 
	// a 
	// b 

	// # 문자열 받는 방법 해결 
	// 문자열 Szie, 공백의 문제점들을 해결할 방법 
	
	char strary[6];
	cin.getline(strary, 6);
	cout << "위 문제 해결 : " << strary << endl;
	// 초과해도 뒤 숫자 만큼만 받음 

	return 1;
}
