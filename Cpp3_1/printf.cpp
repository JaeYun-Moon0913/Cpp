#pragma warning(disable:4996) //freopen 이 안될 때 사용 
#include <iostream> // cput 을 사용하기 위해 사용 했엇다. 
#include<cstdio>


int main()
{
	printf("%d + %d = %i\n", 10, 3, 10 + 3); // formatting 
	printf("%-10da\n", -1); // 좌측정렬 (공백 추가)
	printf("%10da\n", 1); // 우측정렬
	printf("%%\n"); // %만 출력 

	freopen("output.txt", "w", stdout);
	printf("Hello World"); 
}