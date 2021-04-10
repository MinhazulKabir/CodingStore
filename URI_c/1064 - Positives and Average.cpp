#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,sum=0,avg;
    int i,n=0;
    for(i=0;i<6;i++)
    {
        scanf("%lf",&a);
        if(a>0)
        {
            n++;
            sum=sum+a;
        }
    }
    avg=(sum/n);
    printf("%d valores positivos\n%.1lf\n",n,avg);
    return 0;
}
