#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c1,c2,n;
    while(scanf("%d",&n) && n!=0)
    {
        c1=0,c2=0;
        while(n!=0)
        {
            scanf("%d%d",&a,&b);
            if(a>b)
            {
                c1++;
            }
            if(a<b)
            {
                c2++;
            }
            if(a==b)
            {
                c1+=0;
                c2+=0;
            }
            n--;
        }
        printf("%d %d\n",c1,c2);
    }
    return 0;
}
