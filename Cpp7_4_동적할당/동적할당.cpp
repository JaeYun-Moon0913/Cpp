#include<iostream>

using namespace std;

void sub1()
{
	//int* pNum = new int;
	//new : 동적메모리 할당
	// heap 이란 영역에 메모리 할당 하고 주소를 return 한다. 
	// 위 내용 때문에 반드시 포인터로 가르켜야 한다. 
	
	//*pNum = 1;
	// 위에서는 주소값만 할당 했기 때문에 이렇게 값을 넣어줘야 한다.

	//delete pNum;
	// 항상 사용후 위 방법대로 지워준다. 

	while (true)
	{
		// int num; // stack 이란 곳에 할당이 된다. 
		// 무한 루프를 돌아도 빠져나갈때 삭제가 되기 때문에 문제가 안됨 

		int* num = new int;
		// 메모리가 계속 증가 한다. -> memory react
		// stack 이란 공간에 num이 할당 (자동)
		// heap 이란 공간에 이름이 없는 공간에 할당이 됨 -> new int (동적)
		// 그 주소값을 stack 영역에 num에게 넘김 

		delete num;
		// delete num; 메모리가 늘어나지 않음 
	}

}