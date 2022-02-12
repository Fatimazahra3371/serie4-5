#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,k;
    float sumT;
    sumT=0.0;
    printf("entre la valeur n\n");
    scanf("%d",&n);
    for(k=1;k<=(2*n);k++)
    {
        sumT=(sumT+k)/((k*k)+(n*n));
    }
    printf("sumT= %f",sumT);

    return sumT;
}

