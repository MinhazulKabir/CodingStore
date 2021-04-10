#include <iostream>
 
using namespace std;
 
int main() {
 
    int R;
    double pi=3.14159,a;
    scanf("%d",&R);
    a=(4.0/3)*pi*double(R)*double(R)*double(R);
    printf("VOLUME = %.3lf\n",a);
    return 0;
}