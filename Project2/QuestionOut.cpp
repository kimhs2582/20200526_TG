#include "QuestionOut.h"

void QuestionOut(Init init, Word wd) {
	if (init.Lv == LV1)
		cout << "1�� ���� = " << wd.Question[QUESTION1] << endl;
	if (init.Lv == LV2)
		cout << "2�� ���� = " << wd.Question[QUESTION2] << endl;
	if (init.Lv == LV3)
		cout << "3�� ���� = " << wd.Question[QUESTION3] << endl;
};