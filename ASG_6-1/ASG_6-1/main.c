#include <stdio.h>
#include <stdlib.h>
 struct information
{
    char *name;
    int  age;
    int  degree;
    int  section;
}Student1,Student2,Student3,Student4,Student5;
void PRINT(struct information arr[])
{
for(int i=0;i<5;i++)

{   printf("Student %d\n",i+1);
    printf("Name ");
    printf("%s\n",arr[i].name);
    printf("Age= ");
    printf("%d\n",arr[i].age);
    printf("Degree= ");
    printf("%d\n",arr[i].degree);
    printf("Section= ");
    printf("%d\n",arr[i].section);
}
}
int main()
{
struct information arr[5];
arr[0].name="Saif";
arr[0].age=21;
arr[0].degree=88;
arr[0].section=2;
arr[1].name="Mohamed";
arr[1].age=33;
arr[1].degree=80;
arr[1].section=21;
arr[2].name="Abdallah";
arr[2].age=25;
arr[2].degree=81;
arr[2].section=24;
arr[3].name="Mohamed";
arr[3].age=27;
arr[3].degree=85;
arr[3].section=5;
arr[4].name="Gad";
arr[4].age=24;
arr[4].degree=90;
arr[4].section=21;
PRINT(arr);



    return 0;
}
