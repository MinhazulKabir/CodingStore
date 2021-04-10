#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<10;i+=2)
    {
        for(j=i+6;j>=i+4;j--)
        {
            printf("I=%d J=%d\n",i,j);
        }
    }
    return 0;
}
