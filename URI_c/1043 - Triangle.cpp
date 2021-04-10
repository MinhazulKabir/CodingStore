#include <bits/stdc++.h>
using namespace std;
int main()
{

    double a,b,c,s;
    scanf("%lf %lf %lf",&a,&b,&c);
    s=(a+b+c)/2;
    if(sqrt(s*(s-a)*(s-b)*(s-c))!=0)
    {
        printf("Perimetro = %.1lf\n",a+b+c);
    }
    if(sqrt(s*(s-a)*(s-b)*(s-c))==0)
    {
        printf("Area = %.1lf\n",(a+b)/2*c);
    }
    return 0;
}

