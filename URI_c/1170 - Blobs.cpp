#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i,n,c,b;
    float a;
    scanf("%ld",&n);
    for(i=0; i<n; i++)
    {
        scanf("%f",&a);
        c=0;
        while(a>1)
        {
            a/=2;
            c++;
        }
        printf("%ld dias\n",c);
    }
    return 0;
}