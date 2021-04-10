#include <iostream>
 
using namespace std;
 
int main() {
 
    char n[100];
    double a,b;
    scanf("%s %lf %lf",n,&a,&b);
    printf("TOTAL = R$ %.2lf\n",a+(b*0.15));
    return 0;
}