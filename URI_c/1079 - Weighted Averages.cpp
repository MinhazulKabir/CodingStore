#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    scanf("%d",&n);
    double a,b,c,avg=0,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%lf%lf%lf",&a,&b,&c);
        printf("%.1lf\n",(a*2+b*3+c*5)/10);
    }
    return 0;
}
