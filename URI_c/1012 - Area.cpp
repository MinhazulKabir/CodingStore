#include <iostream>
 
using namespace std;
 
int main() {
 
    double a,b,c,pi = 3.14159;
    scanf("%lf %lf %lf",&a,&b,&c);
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",0.5*a*c, pi*c*c, 0.5*(a+b)*c, b*b, a*b);
    return 0;
}