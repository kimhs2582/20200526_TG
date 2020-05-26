#include <iostream>
#include <windows.h>
#include <string.h>

using namespace std;

//타이핑게임


/*
struct Word{
	const char* Question[] = { "가","나","다" };

} WD;
*/

int main(void)
{
	//초기설정
	
	char *Inputword = 0;
	char *arr1 = new char[4];
	Inputword = arr1;
	int Lv = 1;
	int Count = 0;
	int Life = 3;
	const char* Question[] = { "가","나","다" };

	//초기화면
	cout << "게임 시작 " << endl;


	//반복
	while (1)
	{
		Sleep(2000);
		system("cls");
		//보너스생성

		//일반문제 단어 출력및 입력
		if (Lv == 1)
			cout << "1번 문제 = " << Question[0] << endl;
		if (Lv == 2)
			cout << "2번 문제 = " << Question[1] << endl;
		if (Lv == 3)
			cout << "3번 문제 = " << Question[2] << endl;

		//정답입력
		cin >> Inputword;

		//정답여부 판별후 정산
		if (strcmp(Question[Count], Inputword) == 0)
		{
			Lv++;
			Count++;
		}
		else
			Life--;
	
		// 결과 출력
		cout << "레벨 " << Lv << "라이프 " << Life << endl; 

		//승리여부
		if (Lv == 4)
			cout << "승" << endl;
		if (Life == 0)
			cout << "패" << endl;

		//라이프없음 죽음
		if (Life == 0 || Lv == 4)
			break;

		
	//반복끝
	};





	delete []arr1;
	return 0;
}