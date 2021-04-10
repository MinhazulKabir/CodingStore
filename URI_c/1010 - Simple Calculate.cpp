#include <iostream>
 
using namespace std;
 
int main() {
 
    int m,n,a,b;
    double x,y;
    scanf("%d %d %lf",&a,&b,&x);
    scanf("%d %d %lf",&m,&n,&y);
    printf("VALOR A PAGAR: R$ %.2lf\n",double(b)*x+double(n)*y);
    return 0;
}