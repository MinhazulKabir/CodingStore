#include <iostream>
 
using namespace std;
 
int main() {
 
    int a,b,c;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        c=24-a;
        printf("O JOGO DUROU %d HORA(S)\n",c+b);
    }
    if(a==b)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    if(a<b)
    {
        c=b-a;
        printf("O JOGO DUROU %d HORA(S)\n",c);
    }
 
    return 0;
}