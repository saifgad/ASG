#include <stdio.h>
#include <stdlib.h>
void SORT(int arr[])
{
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {   if (arr[i]>arr[j]){
            arr[i]=arr[i]+arr[j];
            arr[j]=arr[i]-arr[j];
            arr[i]=arr[i]-arr[j];
        }
        }
        }
}

void MAXIMUM(int arr[])
{
  int Max=arr[0];
   for(int i=1;i<5;i++)
    {

           if(arr[i]>Max)
     {
        Max=arr[i];
     }

    }
printf("the maximum number is %d\n",Max);}
void MINIMUM(int arr[])
{
  int Min=arr[0];
   for(int i=1;i<5;i++)
    {

           if(arr[i]<Min)
     {
        Min=arr[i];
     }

    }
printf("the Minimum number is %d\n",Min);}
int main()
{

int arr[5];
for(int i=0;i<5;i++)
scanf("%d",&arr[i]);
for(int i=0;i<5;i++)
printf("%d ",arr[i]);
SORT(arr);
printf("\n");
for(int i=0;i<5;i++)
printf("%d ",arr[i]);
printf("\n");
MAXIMUM(arr);
MINIMUM(arr);






    return 0;
}
