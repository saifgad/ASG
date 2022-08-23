#include <stdio.h>
#include <stdlib.h>

void Fibonacci (int n)
{
    int a1=0;
    int a2=1;
    int a3=a1+a2;
    printf("%d, %d",a1,a2);
    for(int i=3;i<=n;i++)
    {
        printf("%d ",a3);
        a1=a2;
        a2=a3;
        a3=a1+a2;
    }
}
int fibonacci(int n)
{

    if (n==0)
        return 0;
    else if (n==1)
        return 1;
    else
        return (fibonacci(n-1))+(fibonacci(n-2));

}


int main()
{

int n;
printf("Enter The number of terms ");
scanf("%d",&n);
fibonacci(n);
    for(int i = 0;i<n;i++)
      printf("%d ",fibonacci(i));
printf("\n");
Fibonacci(n);
    return 0;
}
