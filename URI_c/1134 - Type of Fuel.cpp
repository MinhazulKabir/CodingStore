#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Alcohol=0, Gasoline=0, Diesel=0,n;
    while(scanf("%d",&n) && n!=4)
    {
        if(n==1)
        {
            Alcohol++;
        }
        if(n==2)
        {
            Gasoline++;
        }
        if(n==3)
        {
            Diesel++;
        }
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",Alcohol,Gasoline,Diesel);
    return 0;
}
