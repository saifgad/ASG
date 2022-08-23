#include <stdio.h>
#include <stdlib.h>

struct adding
{
    float Real;
    float Complex;
};
int main()
{
    printf("For 1st complex number\n");
    printf("Enter real and complex number respectively\n");
    struct adding a1;
    scanf("%f",&a1.Real);
    scanf("%f",&a1.Complex);
    printf("For 2st complex number\n");
    printf("Enter real and complex number respectively\n");
    struct adding a2;
    scanf("%f",&a2.Real);
    scanf("%f",&a2.Complex);
    printf("%.1f + %.1f i",(a1.Real+a2.Real),(a1.Complex+a2.Complex));
    return 0;
}
