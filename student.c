#include <stdio.h>
#include <string.h>
struct std
{
	char name[20];
	int roll;
	int clas;
	char dept[5];
}student[2];
int main()
{
    int i,check=0,sl;
    for(i=0; i<2; i++)
    {
    	printf("\nEnter Information of student %d : \n", i);
        printf("\t\tEnter student name  : ");
        scanf("%s",&student[i].name);

        printf("\t\tEnter student roll  : ");
        scanf("%d",&student[i].roll);

        printf("\t\tEnter student class : ");
        scanf("%d",&student[i].clas);

        printf("\t\tEnter student dept  : ");
        scanf("%s",student[i].dept);
    }
    for(i=0; i<2; i++)
    {
    	printf("Information of student %d : \n", i);
        printf("\t\t\t<< Name  = %s >>\n",student[i].name);
        printf("\t\t\t<< Roll  = %d >>\n",student[i].roll);
        printf("\t\t\t<< Class = %d >>\n",student[i].clas);
        printf("\t\t\t<< Dept  = %s >>\n",student[i].dept);
    }
    printf("If you want to edit any data of specific student : \n \t Enter 1 (yes) = ");
    scanf("%d",&check);
    if(check==1){
    	printf("Enter student sl no : \n");
    	scanf("%d",&sl);
    	printf("\nEnter Information of student %d : \n", i);
        printf("\tEnter student name : ");
        scanf("%s",&student[sl].name);

        printf("\tEnter student roll : ");
        scanf("%d",&student[sl].roll);

        printf("\tEnter student class : ");
        scanf("%d",&student[sl].clas);

        printf("\tEnter student department : ");
        scanf("%s",student[sl].dept);
    }
    for(i=0; i<2; i++)
    {
    	printf("Information of student %d : \n", i);
        printf("\t\t\t<< Name  = %s >>\n",student[i].name);
        printf("\t\t\t<< Roll  = %d >>\n",student[i].roll);
        printf("\t\t\t<< Class = %d >>\n",student[i].clas);
        printf("\t\t\t<< Dept  = %s >>\n",student[i].dept);
    }

}
