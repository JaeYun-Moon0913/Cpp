/* for (�ʱ�ȭ; ����; ����)
*	�ݺ��� ���� 
* 1. �ʱ�ȭ 
* 2. ���� (True ->3 , False -> Ż��)
* 3. �ݺ��� ���� ���� 
* 4. ���� 
* 5. 2������ ���ư� 
*/

#include <iostream>

using namespace std;

int main() 
{
	//for (int i(0); i < 10; ++i)
		//cout << i << endl;
	for (;;)
	{
		cout << "Food" << endl;
		cout << "1)kimch" << endl;
		cout << "2)bbq" << endl;

		bool needToBreak = false; // if ���� �̿��ؼ� for ���� ���� 
		// ���ָ� ������ ���� 
		
		int num;
		cin >> num;
		switch (num)
		{
		case 1 :
			cout << "Kimch" << endl;
			needToBreak = true; // for ���� ���� �ϱ����� �߰� 
			break;
			
		case 2:
			cout << "BBQ" << endl;
			needToBreak = true;
			break; // �����ִ� break�δ� for ���� ������ �ʱ� ������ 
			// for ���� ��� �ݺ� �ȴ�. 
			
		}
		if (needToBreak)
			break; // for ���� ���� �ϱ����� �߰� 
	}
	

}

// continue �� break ���� 
// break : �ٷ� ���� 
// continue : ������ �� 


// ####### if ���� ������� �ʰ� ������ ��� ##########
/*
for (;;)
{
	cout << "Food" << endl;
	cout << "1)kimch" << endl;
	cout << "2)bbq" << endl;

	int num;
	cin >> num;
	switch (num)
	{
	case 1:
		cout << "Kimch" << endl;
		needToBreak = true; // for ���� ���� �ϱ����� �߰� 
		break;

	case 2:
		cout << "BBQ" << endl;
		needToBreak = true;
		break; // �����ִ� break�δ� for ���� ������ �ʱ� ������ 
		// for ���� ��� �ݺ� �ȴ�. 

	default:
		continue; // �ٽ� �ϰ� �����ϰ� ���ư���. 

	}
	break;  
}
*/
