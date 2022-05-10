#include<stdio.h>
#include<math.h>

void main(void)
{
    double k;
    
    for(k=0;k<=6.28;k+=0.05)
    {
        printf("%lf %lf\n",k,sin(k));
    }
}
