#include<bits/stdc++.h>
using namespace std;
int main()
{

    int j,a,i,b,c=1;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i+=a)
    {
        for(j=1;j<=a;j++)
    {

        printf("%d",c);
        if(j!=a)
        {
            printf(" ");
        }
        c++;
    }
    printf("\n");

    }
    return 0;

}
