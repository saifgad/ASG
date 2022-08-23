#include <stdio.h>
#include <stdlib.h>

void Swapping_Func(int *x,int *y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}

int main()
{  int x=0,y=0;
    printf("Enter the first number");
    scanf("%d",&x);
    printf("Enter the second number");
    scanf("%d",&y);
    printf("x= %d\n",x);
    printf("y= %d\n",y);
    Swapping_Func(&x,&y);
    printf("x= %d\n",x);
    printf("y= %d\n",y);

    return 0;
}
