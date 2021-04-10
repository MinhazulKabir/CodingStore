#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,i,f=0,j;
    scanf("%d",&a);
    for(j=1; j<=a; j++)
    {
        printf("%d %d %d\n",j,j*j,j*j*j);
        printf("%d %d %d\n",j,j*j+1,j*j*j+1);
    }

    return 0;
}
