#include <iostream>
#include <windows.h>
#include <string.h>

using namespace std;

//Ÿ���ΰ���


/*
struct Word{
	const char* Question[] = { "��","��","��" };

} WD;
*/

int main(void)
{
	//�ʱ⼳��
	
	char *Inputword = 0;
	char *arr1 = new char[4];
	Inputword = arr1;
	int Lv = 1;
	int Count = 0;
	int Life = 3;
	const char* Question[] = { "��","��","��" };

	//�ʱ�ȭ��
	cout << "���� ���� " << endl;


	//�ݺ�
	while (1)
	{
		Sleep(2000);
		system("cls");
		//���ʽ�����

		//�Ϲݹ��� �ܾ� ��¹� �Է�
		if (Lv == 1)
			cout << "1�� ���� = " << Question[0] << endl;
		if (Lv == 2)
			cout << "2�� ���� = " << Question[1] << endl;
		if (Lv == 3)
			cout << "3�� ���� = " << Question[2] << endl;

		//�����Է�
		cin >> Inputword;

		//���俩�� �Ǻ��� ����
		if (strcmp(Question[Count], Inputword) == 0)
		{
			Lv++;
			Count++;
		}
		else
			Life--;
	
		// ��� ���
		cout << "���� " << Lv << "������ " << Life << endl; 

		//�¸�����
		if (Lv == 4)
			cout << "��" << endl;
		if (Life == 0)
			cout << "��" << endl;

		//���������� ����
		if (Life == 0 || Lv == 4)
			break;

		
	//�ݺ���
	};





	delete []arr1;
	return 0;
}