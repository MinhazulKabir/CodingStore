#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,a,b;
    char c;
    while(scanf("%d%c%d",&a,&c,&b)!=EOF)
    {
        if(a<7)
        {
            printf("Atraso maximo: 0\n");
        }
        if(a>=7)
        {
            x=(a-7)*60+b;
            printf("Atraso maximo: %d\n",x);
        }
    }
    return 0;
}
