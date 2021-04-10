#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0;
    double a[100];
    scanf("%lf",&a[0]);
    while(i!=100)
    {
        printf("N[%d] = %.4lf\n",i,a[0]);
        i++;
        a[0]/=2;
    }
    return 0;
}
