#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a==0)
            printf("NULL\n");
        if(a>0)
        {
            if(a%2==0)
                printf("EVEN POSITIVE\n");
            else
                printf("ODD POSITIVE\n");
        }
        else if(a<0)
            {
            if(a%2!=0)
                printf("ODD NEGATIVE\n");
            else
                printf("EVEN NEGATIVE\n");
        }

    }
    return 0;
}
