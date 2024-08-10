
#include "..\inc\Person.h"


static PERSON person ;

PERSON *psn = &person;
PHONE *phn =&person.cellPhone;

void SetPersonInfo(PERSON *psn, PHONE *phn)
{
	psn->age = 35;
	psn->name = "s00o";
	phn->areaCode = 82;
	phn->phoneNum = 1063622298;
}

void GetPersonInfo(void)
{
	printf("age : %d\n", person.age);
	printf("name : %s\n", person.name);
	printf("areaCode : %d\n", person.cellPhone.areaCode);
	printf("phoneNum : %d\n", person.cellPhone.phoneNum);
}

void InitPersonInfo(PERSON *psn, PHONE *phn)
{
	psn->age = 0;
	psn->name = NULL;
	psn->cellPhone.areaCode = 0;
	psn->cellPhone.phoneNum=0;
}

