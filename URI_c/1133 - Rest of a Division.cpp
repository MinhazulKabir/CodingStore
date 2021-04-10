#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,swp;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        swp=a;
        a=b;
        b=swp;
    }
    for(i=a+1; i<b; i++)
    {
        if(i%5==2)
            printf("%d\n",i);
        else if(i%5==3)
            printf("%d\n",i);
    }
    return 0;
}
