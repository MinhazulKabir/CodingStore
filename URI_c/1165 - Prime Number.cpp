///NOMAN-2013331023
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,i,f,d,l;
    cin>>n;
    while(n>0)
    {
        cin>>a;
        d=sqrt(a);
        l=0;
        for(i=d; i>=2; i--)
        {
            if(a%i!=0)
                l++;
        }
        if(l==d-1)
            cout<<a<<" eh primo"<<endl;
            else
            cout<<a<<" nao eh primo"<<endl;

        n--;
    }

    return 0;
}