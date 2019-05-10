#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n,m,sum,d1;
    float a,b,s,d2;
    scanf("%d %d",&n,&m);
    scanf("%f %f",&a,&b);
    sum=n+m;
    s=a+b;
    d1=n-m;
    d2=a-b;
    printf("%d %d\n",sum,d1);
    printf("%.1f %.1f",s,d2);


    return 0;
}

