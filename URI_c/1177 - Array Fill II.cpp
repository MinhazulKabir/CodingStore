#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
    for(j=0; j<1000; j+=n)
    {
        for(i=0; i<n; i++)
        {
            printf("N[%d] = %d\n",c,i);
            c++;
            if(c==1000)
                break;
        }

    }
    return 0;
}
