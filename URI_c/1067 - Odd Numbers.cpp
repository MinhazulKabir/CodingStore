#include<stdio.h>
int main()
{
    int d;
    scanf("%d", &d);
    if(d%2==0)
    {
        for(int i=1;i<d;i+=2)
        {
            printf("%d\n",i);
        }
    }
    else
    {
        for(int i=1;i<=d;i+=2)
        {
            printf("%d\n",i);
        }
    }
}
