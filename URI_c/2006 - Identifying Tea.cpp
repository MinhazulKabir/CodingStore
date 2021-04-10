#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,a,c=0,i;
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        scanf("%d",&a);
        if(n==a)
        {
            c++;
        }
    }
    printf("%d\n",c);
    return 0;
}
