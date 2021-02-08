#include <stdio.h>
#include <string.h>
int main()
{
    char s[4] = " ";
    int n[3],i,max,min,mid,a,b,c;
    for(i=0;i<3;i++)
    {
        scanf("%d",&n[i]);
    }
    fflush(stdin);
    gets(s);
    max = n[0];
    for(i=1;i<3;i++)
    {
        if(max<n[i])
            max = n[i];
    }
    min = n[0];
    for(i=1;i<3;i++)
    {
        if(min>n[i])
            min = n[i];
    }
    mid = n[0];
    for(i=1;i<3;i++)
    {
        if(mid>min&&mid<max)
            mid = n[i];
    }
    a = min;
    b = mid;
    c = max;
    if(!strcmp(s,"ABC"))
        printf("%d %d %d",a,b,c);
    else if(!strcmp(s,"BCA"))
        printf("%d %d %d",b,c,a);
    else if(!strcmp(s,"CAB"))
        printf("%d %d %d",c,a,b);
    else if(!strcmp(s,"ACB"))
        printf("%d %d %d",a,c,b);
    else if(!strcmp(s,"CBA"))
        printf("%d %d %d",c,b,a);
    else if(!strcmp(s,"BAC"))
        printf("%d %d %d",b,a,c);
        
}
