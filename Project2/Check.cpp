#include "Check.h"

int Check(Init init, Word wd) {
	if (strcmp(wd.Question[init.Count], init.Inputword) == NULL)
	{
		return 1;
	}
	else
		return 0;

};