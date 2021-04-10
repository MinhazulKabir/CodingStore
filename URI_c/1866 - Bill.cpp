#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    int n,a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            printf("0\n");
        }
        else
        {
            printf("1\n");
        }
    }
    return 0;
}
