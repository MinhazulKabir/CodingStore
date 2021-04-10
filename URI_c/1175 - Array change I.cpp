#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j=0,a[20],b[20];
    for(i=0;i<20;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=19;i>=0;i--)
    {
        printf("N[%d] = %d\n",j,a[i]);
        j++;
    }
    return 0;
}
