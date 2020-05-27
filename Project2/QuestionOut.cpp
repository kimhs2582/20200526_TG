#include "QuestionOut.h"

void QuestionOut(Init init, Word wd) {
	if (init.Lv == LV1)
		cout << "1번 문제 = " << wd.Question[QUESTION1] << endl;
	if (init.Lv == LV2)
		cout << "2번 문제 = " << wd.Question[QUESTION2] << endl;
	if (init.Lv == LV3)
		cout << "3번 문제 = " << wd.Question[QUESTION3] << endl;
};