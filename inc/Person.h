
#ifndef __PERSON_H__
#define __PERSON_H__

#include <stdio.h>

typedef struct Phone {
	int areaCode;
	int phoneNum;
}PHONE;

typedef struct Person {
	int age;
	char *name;
	PHONE cellPhone;
}PERSON;

extern PERSON person;
extern PERSON *psn;
extern PHONE *phn;

void SetPersonInfo(PERSON *psn, PHONE *phn);
void GetPersonInfo(void);
void InitPersonInfo(PERSON *psn, PHONE *phn);

#endif