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
	const char* Question[BUFF] = { "가","나","다" };
	
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
		cout << "1번 문제 = " << wd.Question[QUESTION1] << endl;
	if (init.Lv == LV2)
		cout << "2번 문제 = " << wd.Question[QUESTION2] << endl;
	if (init.Lv == LV3)
		cout << "3번 문제 = " << wd.Question[QUESTION3] << endl;
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
		cout << "승" << endl;
	if (init.Life == NULL)
		cout << "패" << endl;
	
};

void Delete(Init* init) { delete init->arr1; };


int main(void)
{
	//초기설정
	Word wd;
	Init init;
	

	//초기화면
	cout << "게임 시작 " << endl;


	//반복
	while (init.Play)
	{
		Sleep(2000);
		system("cls");
		//보너스생성

		//일반문제 단어 출력및 입력
		QuestionOut(init,wd);

		//정답입력
		cin >> init.Inputword;


		//정답여부 판별후 정산
		if (Check(init, wd)) {
			init.Lv++;
			init.Count++;
		}
		else 
			init.Life--;

		// 결과 출력
		cout << "레벨 " << init.Lv << " 라이프 " << init.Life << endl;

		//승리여부//라이프없음 죽음
		Result(init);
		if (init.Life == NULL || init.Lv == FINISH)
			init.Play = STOP;

		

		
	//반복끝
	};



	Delete( &init);
	return NULL;
}