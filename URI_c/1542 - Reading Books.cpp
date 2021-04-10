#include<bits/stdc++.h>
using namespace std;
int main()
{
    //short n;
    int p,q,d,page;
    while(scanf("%d",&q)&q!=0)
    {
        scanf("%d%d",&d,&p);
        page=(q*d*p)/(p-q);
        if(page==1)
            printf("1 pagina\n");
        else
            printf("%d paginas\n",page);

    }
    return 0;
}
