#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,a,i,c0=0,c1=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a==0)
        {
            c0++;
        }
        if(a==1)
        {
            c1++;
        }
    }
    if(c0>c1)
        printf("Y\n");
    if(c0<=c1)
        printf("N\n");
    return 0;
}
