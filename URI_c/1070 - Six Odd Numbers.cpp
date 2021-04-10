#include<stdio.h>
int main()
{
    int d;
    scanf("%d", &d);
    if(d%2==0)
    {
        for(int i=d+1;i<d+12;i+=2)
        {
            printf("%d\n",i);
        }
    }
    else
    {
        for(int i=d;i<d+12;i+=2)
        {
            printf("%d\n",i);
        }
    }
}
