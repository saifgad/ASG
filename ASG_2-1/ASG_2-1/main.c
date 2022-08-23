#include <stdio.h>
#include <stdlib.h>

int main()
{   int a,b;
    char s;
    printf("Enter Number_1 :");
    scanf("%d",&a);
    printf("Enter the operator :");
    scanf(" %c",&s);
    printf("Enter Number_2 : ");
    scanf("%d",&b);
    if (s=='+')
        {printf("%d\n",a+b);

        }
     if ((s=='-')&&(a>=b))
        {printf("THE RESULT= %d\n",a-b);

        }
     if ((s=='-')&&(b>a))
        {printf("THE RESULT= %d\n",b-a);

        }
     if (s=='*')
        {printf("THE RESULT= %d\n",a*b);

        }
     if ((s=='/')&&(a>=b))
        {printf("THE RESULT= %d\n",a/b);

        }
     if ((s=='/')&&(b>a))
        {printf("THE RESULT= %d\n",b/a);

        }



















    return 0;
}
