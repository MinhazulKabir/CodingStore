#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,sum=0;
    double x,y;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%lf %lf",&x,&y);
        if(y==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            printf("%.1lf\n",(x/y));
        }
    }
    return 0;
}
