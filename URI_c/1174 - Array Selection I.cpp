#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i;
    double a[1000];
    for(i=0;i<100;i++)
    {
        scanf("%lf",&a[i]);
        if(a[i]<=10)
        {
            printf("A[%d] = %.1lf\n",i,a[i]);
        }
        //printf("\n");
    }
    return 0;
}
