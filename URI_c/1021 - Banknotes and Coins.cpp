#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,i,k,j,l;
    double n,aa;
    scanf("%lf",&n);
    a=int(n)/100;
    b=(int(n)%100)/50;
    c=((int(n)%100)%50)/20;
    d=(((int(n)%100)%50)%20)/10;
    e=((((int(n)%100)%50)%20)%10)/5;
    f=(((((int(n)%100)%50)%20)%10)%5)/2;
    g=((((((int(n)%100)%50)%20)%10)%5)%2)/1;
    aa=(n-int(n))*100;
    h=int(aa)/50;
    i=(int(aa)%50)/25;
    j=((int(aa)%50)%25)/10;
    k=(((int(aa)%50)%25)%10)/5;
    l=((((int(aa)%50)%25)%10)%5)/1;
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n",a,b,c,d,e,f);
    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n",g,h,i,j,k,l);
    return 0;
}
