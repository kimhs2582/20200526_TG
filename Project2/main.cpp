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