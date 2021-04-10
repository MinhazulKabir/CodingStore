#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,a,b,n,i;
    double sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        {
            if(a==1001)
            {
                sum+=double(b)*1.5;
            }
            if(a==1002)
            {
                sum+=double(b)*2.5;
            }
            if(a==1003)
            {
                sum+=double(b)*3.5;
            }
            if(a==1004)
            {
                sum+=double(b)*4.5;
            }
            if(a==1005)
            {
                sum+=double(b)*5.5;
            }
        }
    }
    printf("%.2lf\n",sum);
    return 0;
}
