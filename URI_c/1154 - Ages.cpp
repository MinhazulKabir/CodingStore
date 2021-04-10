#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,c=0;
    while(scanf("%d",&n) && n>=0)
    {
        sum+=n;
        c++;
    }
    printf("%.2lf\n",double(sum)/double(c));
    return 0;
}
