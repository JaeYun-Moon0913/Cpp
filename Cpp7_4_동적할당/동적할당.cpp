#include<iostream>

using namespace std;

void sub1()
{
	//int* pNum = new int;
	//new : �����޸� �Ҵ�
	// heap �̶� ������ �޸� �Ҵ� �ϰ� �ּҸ� return �Ѵ�. 
	// �� ���� ������ �ݵ�� �����ͷ� �����Ѿ� �Ѵ�. 
	
	//*pNum = 1;
	// �������� �ּҰ��� �Ҵ� �߱� ������ �̷��� ���� �־���� �Ѵ�.

	//delete pNum;
	// �׻� ����� �� ������ �����ش�. 

	while (true)
	{
		// int num; // stack �̶� ���� �Ҵ��� �ȴ�. 
		// ���� ������ ���Ƶ� ���������� ������ �Ǳ� ������ ������ �ȵ� 

		int* num = new int;
		// �޸𸮰� ��� ���� �Ѵ�. -> memory react
		// stack �̶� ������ num�� �Ҵ� (�ڵ�)
		// heap �̶� ������ �̸��� ���� ������ �Ҵ��� �� -> new int (����)
		// �� �ּҰ��� stack ������ num���� �ѱ� 

		delete num;
		// delete num; �޸𸮰� �þ�� ���� 
	}

}