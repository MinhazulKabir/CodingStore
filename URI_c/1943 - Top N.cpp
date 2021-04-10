#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    scanf("%d",&n);
    if(n<=1)
    {
        printf("Top 1\n");
    }
    if(n<=3 && n>1)
    {
        printf("Top 3\n");
    }
    if(n<=5 && n>3)
    {
        printf("Top 5\n");
    }
    if(n<=10 && n>5)
    {
        printf("Top 10\n");
    }
    if(n<=25 && n>10)
    {
        printf("Top 25\n");
    }
    if(n<=50 && n>25)
    {
        printf("Top 50\n");
    }
    if(n<=100 && n>50)
    {
        printf("Top 100\n");
    }
    return 0;
}
