#include <stdio.h>

struct record 
{
	char name[20];
	int age;
	int mark;
};

void main()
{
	struct record student[10];
	int i;
	printf("Enter 10 student details \n");
	for (i=0;i<10;i++)
	{
		printf("Enter name: ");
        scanf("%s",&student[i].name);
		printf("Enter age: ");
        scanf("%d",&student[i].age);
        printf("Enter mark: ");
        scanf("%d",&student[i].mark);
		printf("\n");
	}
	
	printf("The recorded details are: \n");
	for (i=0;i<10;i++)
	{
		printf("%s %d %d \n",student[i].name,student[i].age,student[i].mark);
	}
	
}

