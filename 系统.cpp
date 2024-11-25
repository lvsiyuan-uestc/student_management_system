#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int id;
	char name[50];
	float chinese;
	float math;
	float english;
	float sum;
}student;
int ReadStuInfoFromFile(char* name, student** stu)
{
	FILE* file = fopen(name);
	if (file == NULL)
		return 0;
	int n;
	fread_s(&n,sizeof(int), 1, file);
	*stu = (student)malloc(n * sizeof(student));
	fread_s = (*stu, sizeof(student), n, file);








}