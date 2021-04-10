#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a,pos=0,neg=0,even=0,odd=0;
    //scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        scanf("%d",&a);
        if(a>0)
        {
            pos++;
        }
        if(a<0)
        {
            neg++;
        }
        if(a%2==0)
        {
            even++;
        }
        if(a%2!=0)
        {
            odd++;
        }
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",even,odd,pos,neg);
    return 0;
}
