#include <stdio.h>
#include <math.h>
int main()
{
    float time,m1=199,m2=299,a,b,c=200,d=400;
    char pro;
    scanf("%c",&pro);
    fflush(stdin);
    scanf("%f",&time);
    if(pro=='A')
    {
        if(time<=c)
        {
            printf("%.2f",m1);
        }
        else
        {
            a = floor(time) - c;
            a = a * 3;
            printf("%.2f",m1+a+1);
        }
    }
    else if(pro=='B')
    {
        if(time<=d)
        {
            printf("%.2f",m2);
        }
        else
        {
            b = floor(time) - d;
            b = b * 2;
            printf("%.2f",m2+b+1);
        }
    }
}
