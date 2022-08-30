#include<iostream>

using namespace std;

float sub()
{
	for (int i = 0; i < 10; ++i)
	{
		if (i % 3 == 0)
			continue;
		cout << i << endl;
	}

	int i = 0;
	while (i < 10)
	{
		//if (i % 3 == 0)
					//continue;
				// 위 조건을 걸게 되면 ++i를 건너뛰게 되어 무한 루프 나옴 
		cout << i << endl;
		++i;
	}
		
	return 0;
		
}