#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,h2,m1,m2,hour,minute;
    while(scanf("%d%d%d%d",&h1,&m1,&h2,&m2))
    {
        if(h1==0&&h2==0&&m1==0&&m2==0)
            break;
        else
        {
            if(m1>m2)
            {
                m2+=60;
                h1++;
            }
            if(h1>h2)
            {
                h2+=24;
            }
            minute=abs(m2-m1);
            hour=abs(h2-h1);
        }
        printf("%d\n",hour*60+minute);
    }
    return 0;
}
