#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int n,a,sum,i;
    scanf("%d%d",&a,&n);
    while(n<=0)
        scanf("%d",&n);
    sum=0;
    for(i=1; i<=n; i++)
    {
        sum+=a;
        a++;
    }
    printf("%d\n",sum);
    return 0;
}