#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    while(scanf("%d",&n) && n!=0)
    {
        for(i=1;i<n;i++)
        {
            printf("%d ",i);
        }
        printf("%d",n);
        printf("\n");
    }
    return 0;
}
