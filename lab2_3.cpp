#include <iostream>
using namespace std;
int main()
{
    int n[4],i,a,b,c,max,mid,min;
    string s;
    cin >>a>>b>>c;
    cin >> s;
    max = n[0];
    if(a>b&&a>c)
        max = a;
    else if(b>a&&b>c)
        max = b;
    else if(c>a&&c>b)
        max = c;
    if(a<b&&a<c)
        min = a;
    else if(b<a&&b<c)
        min = b;
    else if(c<a&&c<b)
        min = c;
    if((a<b&&a>c)||(a>b&&a<c))
        mid = a;
    else if((c>b&&c<a)||(c<b&&c>a))
        mid = c;
    else if((b>c&&b<a)||(b<c&&b>a))
        mid = b;
    if(s=="ABC")
    {
        cout <<min;
        cout <<" ";
        cout <<mid;
        cout <<" ";
        cout <<max;
    }
    else if(s=="BCA")
    {
        cout <<mid;
        cout <<" ";
        cout <<max;
        cout <<" ";
        cout <<min;
    }
    else if(s=="CAB")
    {
        cout <<max;
        cout <<" ";
        cout <<min;
        cout <<" ";
        cout <<mid;
    }
    else if(s=="ACB")
    {
        cout <<min;
        cout <<" ";
        cout <<max;
        cout <<" ";
        cout <<mid;
    }
    else if(s=="CBA")
    {
        cout <<max;
        cout <<" ";
        cout <<mid;
        cout <<" ";
        cout <<min;
    }
    else if(s=="BAC")
    {
        cout <<mid;
        cout <<" ";
        cout <<min;
        cout <<" ";
        cout <<max;
    }
}
