#include<iostream>
#include<cstring> // strlen �� ����ϱ� ���� 
#pragma warning(disable:4996) // strcpy ���Ȼ��� ������ ������ Ǭ ��. 

using namespace std;

int sub()
{
	// "abc" : ���ͷ� ���ڿ� 
	cout << "���ͷ� : abc" << endl;

	char str[] = "abc"; // �迭 
	cout << str << endl;
	cout << str[0] << endl;
	cout << str[1] << endl;
	cout << str[2] << endl;
	cout << sizeof(str) << endl; // size �� 4 

	cout << str[3] << endl; //  �� ���� ��� 

	// # ����ȯ 
	cout << "�� ��ȯ" << endl;
	cout << (int)str[0] << endl;
	cout << (int)str[1] << endl;
	cout << (int)str[2] << endl;
	cout << (int)str[3] << endl;// 0 ��� , null ���� 
	// �̰� �־�� ���ڿ��� �ȴ�. �����ϴ� �����̶�� �Ǵ��� 
	cout << "strlen :" << strlen(str) << endl; // 3���
	cout << str << endl; 

	cout << "null ���� Ȯ�� " << endl;
	cout << (int)str[0] << endl;
	cout << (int)str[1] << endl;
	str[1] = 0; // null ���� �߰�
	cout << (int)str[2] << endl;
	cout << (int)str[3] << endl;
	cout << "strlen :"<< strlen(str) << endl; // 1���

	cout << str << endl;

	// # null ���� ���ֱ� 
	cout << "null ���� ���ֱ�" << endl;
	char str1[] = "abc";
	str1[3] = 'd';

	cout << str1 << endl; // �쿬�� null���ڸ� ������ ������ ��� abcd~~~

	// # ������ ���ϱ� 
	cout <<"�ּҰ� ��" << endl;
	char str2[] = "hello";
	char str3[] = "hello";

	if (str2 == str3) // str2, str3 �� �ּҰ��� ��Ÿ���� ������ false �� ���� 
		// �ϰ� ���� �� ���� ���빰�� �˰� ���� 
		cout << "True" << endl;

	int result = strcmp(str2, str3);
	cout << result << endl; // 0�� ������ ���ڰ� ������ 
	// char str3[100] = "hello" �̷������� �迭�� ���̰� �޶� ���ٰ� �Ǵ��Ѵ�. 
	
	char str4[] = "hello";
	char str5[] = "hell";

	int result2 = strcmp(str4, str5);
	cout << result2 << endl; // 1 ��� 

	char str6[] = "hel";
	char str7[] = "hell";

	int result3 = strcmp(str6, str7);
	cout << result3 << endl; // -1 ��� 

	//# ���ڿ� ���� 
	char str8[] = "bye";
	char str9[100];

	// C Ÿ���� ���ڿ� �̴�. 
	strcpy(str9, str8); // ������ �̽� ������ ���� 
	// ����� �ٸ� �� ������ ���� �޸𸮸� ������ ����� �� �����Ƿ� ����
	cout << "strcpy : " << str9 << endl;
	
	// C Ÿ���� ���ڿ�
	//strcat(str6, str7);
	//cout << str6 << endl;
	// ��� : helhell 

	//# type �ٲٱ� 
	// ��� ���⼭ �� str �� ���ڿ��̴�. 
	char str10[] = "1";
	int num = atoi(str10); 
	// float ������ �ٲ� �� float num = atof(str10); 

	cout << "type ��ȯ str -> int : " << num << endl;

	//  int ���� str �� 
	int num1 = 100;
	char str11[100];

	sprintf(str11, "%d %d", num1, num1);
	cout << "type ��ȯ int -> str" << str11 << endl;
	// �׳� ���� �����̴�.

	// # ���ڿ� �޴� ��� 
	char strinput[6];
	cin >> strinput;
	cout << "�Է� �ޱ� ��� : " << strinput << endl;
	// �ʱ�ȭ �Ҷ� ������ ���� - �ٸ� �޸� �������� ������ ���� ���� �� ���� 

	char strinput1[100];
	cin >> strinput1;
	cout << "�Է� �ޱ� ��� : " << strinput1 << endl;

	char strinput2[100];
	cin >> strinput2;
	cout << "�Է� �ޱ� ��� : " << strinput2 << endl;
	// a b �̷��� ������ �ְ� �Է� �� �ΰ� �� ���� �Էµ� 
	// ��, �ϳ��� �ϳ��� a b �̷��� ��� �� 
	// a 
	// b 

	// # ���ڿ� �޴� ��� �ذ� 
	// ���ڿ� Szie, ������ ���������� �ذ��� ��� 
	
	char strary[6];
	cin.getline(strary, 6);
	cout << "�� ���� �ذ� : " << strary << endl;
	// �ʰ��ص� �� ���� ��ŭ�� ���� 

	return 1;
}
