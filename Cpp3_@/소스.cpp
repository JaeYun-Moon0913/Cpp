// scanf , printf 비주얼에서 막은 것 c언어이기 때문에 문제가 발생할 수도 있기 때문에? 
#pragma warning(disable : 4996)// 우회 코드
#include<cstdio>
int main()
{
	int num = 0; // 초기화 후 값을 입력 안하면 쓰래기값 나옴  
	// scanf("%d", &num); // 입력을 받을 수 있는 함수? 
	// & scaf에서 num의 값을 넘겨주려고함 
	// 함수 외부 변수에서 함수 내부 변수 바꾸려면 주소값을 줘야함 
	int* ch; 
	int n = scanf("%d %c", &num, &ch); // 입력 받는 개수를 출력 함 
	printf("%d", n);
}
