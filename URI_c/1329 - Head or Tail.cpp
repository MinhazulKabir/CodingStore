#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,y,i,n,c0,c1;
    while(scanf("%d",&n)&& n!=0)
    {
        c0=0,c1=0;
        for(i=0; i<n; i++)
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
        printf("Mary won %d times and John won %d times\n",c0,c1);
    }
    return 0;
}
