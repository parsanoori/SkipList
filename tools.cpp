#include "tools.h"

int generateRandomLevel()
{
	for(int i=0; i<10 ; i++)
		if (rand()%4!=0)
			return i;
	return 0;
}
