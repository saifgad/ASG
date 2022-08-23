#include <stdio.h>
#include <stdlib.h>

int main()
{
int arr[5];
for(int i=0;i<5;i++)
scanf("%d",&arr[i]);
for(int i=0;i<5;i++)
printf("%d ",arr[i]);
printf("\n");
int a[5];



for(int i=0;i<5;i++)
{
    for(int j=4;j==0;j--)
    {
        a[i]=arr[j];
  printf("%d ",a[i]);
  }

}
//for(int i=0;i<5;i++)
//printf("%d ",a[i]);
return 0;
}
