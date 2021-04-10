#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,d,e,f,g;
    scanf("%d",&n);
    a=n/100;
    b=(n%100)/50;
    c=((n%100)%50)/20;
    d=(((n%100)%50)%20)/10;
    e=((((n%100)%50)%20)%10)/5;
    f=(((((n%100)%50)%20)%10)%5)/2;
    g=((((((n%100)%50)%20)%10)%5)%2);
    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",n,a,b,c,d,e,f,g);
    return 0;
}
