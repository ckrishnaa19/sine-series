#include<stdio.h>
#include<math.h>
int main()
{
    double sum=0,term;
    int i=1;
    do
    {
        term=pow((1.0/i),i);
        sum+=term;
        i++;
    }
    while(term>0.000001);
    printf("sum=%lf\n",sum);
    return 0;
}
