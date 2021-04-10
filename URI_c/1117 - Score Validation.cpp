#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0;
    double sum=0,n,avg;
    while(scanf("%lf",&n))
    {
        if(n>0 && n<=10)
        {
            c++;
            sum+=n;
            if(c==2)
            {
                avg=sum/2;
                printf("media = %.2lf\n",avg);
                break;
            }

        }
        else
        {
            printf("nota invalida\n");
        }
    }
    return 0;
}
