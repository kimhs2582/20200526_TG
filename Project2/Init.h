#pragma once


#define  LVSTART 1
#define  FIRSTLIFE 3
#define  NULL 0
#define  FINISH 4
#define  LV1 1
#define  LV2 2
#define  LV3 3
#define  QUESTION1 0
#define  QUESTION2 1
#define  QUESTION3 2
#define  PLAY 1
#define  STOP 0
#define  BUFF 20

using namespace std;


struct Init {
	int Lv = LVSTART;
	int Count = NULL;
	int Life = FIRSTLIFE;
	int Play = PLAY;

	char* arr1 = new char[BUFF];
	char* Inputword = arr1;


};