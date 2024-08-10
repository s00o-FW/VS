
#include <stdio.h>
#include ".\inc\Person.h"
#include <stdlib.h>

void *AllocMemory(int size)
{
	void *var = (void *)malloc(size);
	return var;
}

int main(void)
{
	char *c = AllocMemory(sizeof(char));
	int val1 = 300;
	int val2 = 400;
	//const int *valPtr = &val1;
	int *const valPtr = &val1;
//	*valPtr = 500;
	*valPtr = 300;
	InitPersonInfo(psn,phn);
	SetPersonInfo(psn,phn);
	GetPersonInfo(psn);

	*c = 100;
	printf("%d\n", *c);
	printf("valPtr : %d\n", *valPtr);

	free(c);
	return 0;
}