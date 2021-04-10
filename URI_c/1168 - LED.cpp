#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j,i,sum;
    char s[1000];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%s",s);
        sum=0;
        for(j=0; j<strlen(s); j++)
        {
            if(s[j]=='0')
                sum+=6;
            if(s[j]=='1')
                sum+=2;
            if(s[j]=='2')
                sum+=5;
            if(s[j]=='3')
                sum+=5;
            if(s[j]=='4')
                sum+=4;
            if(s[j]=='5')
                sum+=5;
            if(s[j]=='6')
                sum+=6;
            if(s[j]=='7')
                sum+=3;
            if(s[j]=='8')
                sum+=7;
            if(s[j]=='9')
                sum+=6;
        }
        printf("%d leds\n",sum);
    }
    return 0;
}
