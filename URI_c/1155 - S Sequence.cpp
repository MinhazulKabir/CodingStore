#include<bits/stdc++.h>
using namespace std;
int main()
{
    //int i;
    double n,i,sum=0;
    for(i=1;i<=100;i++)
    {
        n=1/i;
        sum+=n;
    }
    printf("%.2lf\n",sum);
    return 0;
}
