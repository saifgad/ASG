#include <stdio.h>
#include <stdlib.h>

int main()
{int a,n,b;
printf("Enter the number ");
scanf("%d",&a);
printf("\nEnter the nth bit (0-31) ");
scanf("%d",&n);
printf("The number before toggle= %d\n",a);


    b=a^(1<<n);

printf("The number after toggle= %d",b);




    return 0;
}
