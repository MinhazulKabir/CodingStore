#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a;
    scanf("%lf",&a);
    if(a>=0 && a<=2000.00)
    {
        printf("Isento\n");
    }
    if(a>=2000.01 && a<=3000.00)
    {
        printf("R$ %.2lf\n",(a-2000.00)*0.08);
    }
    if(a>=3000.01 && a<=4500.00)
    {
        printf("R$ %.2lf\n",80+(a-3000.00)*0.18);
    }
    if(a>=4500.01)
    {
        printf("R$ %.2lf\n",80+270+(a-4500.00)*0.28);
    }
    return 0;
}
