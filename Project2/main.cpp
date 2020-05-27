#include <iostream>
#include <windows.h>
#include <string.h>

using namespace std;

#define  LVSTART 1
#define  FIRSTLIFE 3
#define  NULL 0
#define  BUFF 20
#define  FINISH 4
#define  LV1 1
#define  LV2 2
#define  LV3 3
#define  QUESTION1 0
#define  QUESTION2 1
#define  QUESTION3 2
#define  PLAY 1
#define  STOP 0

struct Word {
	const char* Question[BUFF] = { "��","��","��" };
	
};

struct Init {
	int Lv = LVSTART;
	int Count = NULL;
	int Life = FIRSTLIFE;
	int Play = PLAY;

	char* arr1 = new char[BUFF];
	char* Inputword = arr1;

	
};


void QuestionOut(Init init,Word wd) {
	if (init.Lv == LV1)
		cout << "1�� ���� = " << wd.Question[QUESTION1] << endl;
	if (init.Lv == LV2)
		cout << "2�� ���� = " << wd.Question[QUESTION2] << endl;
	if (init.Lv == LV3)
		cout << "3�� ���� = " << wd.Question[QUESTION3] << endl;
};

int Check(Init init, Word wd ) {
	if (strcmp(wd.Question[init.Count], init.Inputword) == NULL)
	{
		return 1;
	}
	else
		return 0;
	
};
void Result(Init init) {
	if (init.Lv == FINISH)
		cout << "��" << endl;
	if (init.Life == NULL)
		cout << "��" << endl;
	
};

void Delete(Init* init) { delete init->arr1; };


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