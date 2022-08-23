#include <stdio.h>
#include <stdlib.h>

int main()
{
  	char str[100];
  	int i, j, len, startIndex, endIndex;

  	printf("\n Please Enter any String :  ");
  	gets(str);

  	len = strlen(str);
  	endIndex = len - 1;


  	for(i = len - 1; i >= 0; i--)
	{
		if(str[i] == ' ' || i == 0)
		{


			for( i; i <= endIndex; i++)
			{
				printf("%c", str[i]);
			}
			endIndex = i - 1;
			printf(" ");
		}
	}

    return 0;
}
