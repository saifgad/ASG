#include <stdio.h>
#include <stdlib.h>
void Editing(int *x)
{
    *x=*x+1;
}
int main()
{
int x=0;
printf("Enter the value ");
scanf("%d",&x);
printf("The value before edit= %d\n",x);
Editing(&x);
printf("The value after edit= %d\n",x);

   return 0;
}
