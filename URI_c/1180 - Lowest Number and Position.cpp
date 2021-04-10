#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int low=0,k;
    for(i=0;i<n;i++)
    {
        if(low>a[i])
        {
            low=a[i];
            k=i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",low,k);
    return 0;
}

