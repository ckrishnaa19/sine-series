#include<stdio.h>
#include<math.h>
int main()
{
    double x,rad,sum,term;
    int i;
    printf("enter x in degrees:");
    scanf("%lf",&x);
    rad=x*(3.14159/180);
    term=rad;
    sum=rad;
    for(i=1;fabs(term)>0.000001;i++)
    {
        term=term*(-rad*rad)/((2*i-1)*(2*i));
        sum+=term;
    }
    printf("cos(%lf)=%lf\n",x,sum);
    return 0;
}
