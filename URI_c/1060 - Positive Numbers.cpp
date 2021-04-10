#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d,e,f;
    int i,n=0;
    for(i=0;i<6;i++)
    {
        scanf("%lf",&a);
        if(a>0)
        {
            n++;
        }
    }
    printf("%d valores positivos\n",n);
    return 0;
}
