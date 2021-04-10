#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double a;
    scanf("%d %lf",&n,&a);
    switch(n)
    {
    case 1:
        printf("Total: R$ %.2lf\n",a*4.00);
        break;
    case 2:
        printf("Total: R$ %.2lf\n",a*4.50);
        break;
    case 3:
        printf("Total: R$ %.2lf\n",a*5.00);
        break;
    case 4:
        printf("Total: R$ %.2lf\n",a*2.00);
        break;
    case 5:
        printf("Total: R$ %.2lf\n",a*1.50);
        break;

    }
}
