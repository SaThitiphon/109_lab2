#include <stdio.h>
int main()
{
    float time,m1=199,m2=299,a,b;
    char pro;
    scanf("%c",&pro);
    scanf("%f",&time);
    if(pro=='A')
    {
        if(time<=200)
        {
            printf("%.2f",m1);
        }
        else
        {
            a = (int)time - 200;
            a = a * 3;
            printf("%.2f",m1+a+1);
        }
    }
    else if(pro=='B')
    {
        if(time<=400)
        {
            printf("%.2f",m2);
        }
        else
        {
            b = (int)time - 400;
            b = b * 2;
            printf("%.2f",m2+b+1);
        }
    }
}
