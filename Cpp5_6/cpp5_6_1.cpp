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
				// �� ������ �ɰ� �Ǹ� ++i�� �ǳʶٰ� �Ǿ� ���� ���� ���� 
		cout << i << endl;
		++i;
	}
		
	return 0;
		
}