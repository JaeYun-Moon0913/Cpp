#pragma warning(disable:4996) //freopen �� �ȵ� �� ��� 
#include <iostream> // cput �� ����ϱ� ���� ��� �߾���. 
#include<cstdio>


int main()
{
	printf("%d + %d = %i\n", 10, 3, 10 + 3); // formatting 
	printf("%-10da\n", -1); // �������� (���� �߰�)
	printf("%10da\n", 1); // ��������
	printf("%%\n"); // %�� ��� 

	freopen("output.txt", "w", stdout);
	printf("Hello World"); 
}