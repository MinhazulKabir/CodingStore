#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(n-i==j-1)
                {
                    printf("2");
                }
                else if(i==j)
                {
                    printf("1");
                }
                else
                {
                    printf("3");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
