#include <iostream>
#include <windows.h>

#include "Init.h"
#include "word.h"
#include "QuestionOut.h"
#include "Check.h"
#include "Result.h"
#include "Delete.h"


int main(void)
{
	//�ʱ⼳��
	Word wd;
	Init init;
	

	//�ʱ�ȭ��
	cout << "���� ���� " << endl;


	//�ݺ�
	while (init.Play)
	{
		Sleep(2000);
		system("cls");
		//���ʽ�����

		//�Ϲݹ��� �ܾ� ��¹� �Է�
		QuestionOut(init,wd);

		//�����Է�
		cin >> init.Inputword;


		//���俩�� �Ǻ��� ����
		if (Check(init, wd)) {
			init.Lv++;
			init.Count++;
		}
		else 
			init.Life--;

		// ��� ���
		cout << "���� " << init.Lv << " ������ " << init.Life << endl;

		//�¸�����//���������� ����
		Result(init);
		if (init.Life == NULL || init.Lv == FINISH)
			init.Play = STOP;
		
	//�ݺ���
	};

	Delete( &init);
	return NULL;
}