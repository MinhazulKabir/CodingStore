#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,x1,x2,d;
    scanf("%lf%lf%lf",&a,&b,&c);
    d=sqrt(b*b-4*a*c);
    if (sqrt(pow(b,2)-4*a*c)>0 && a!=0)
    {
    	x1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
        x2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
    	printf("R1 = %.5lf\nR2 = %.5lf\n",x1,x2);
    	

    }
    else
    {
        printf("Impossivel calcular\n");
    }

    return 0;
}
