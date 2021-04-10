#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,h2,m1,m2;
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    if(m2>m1)
    {
        if(h1==h2)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",0,m2-m1);
        }
        if(h2>h1)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h2-h1,m2-m1);
        }
        else
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h2+24-h1,m2-m1);
        }
    }
    if(m2<m1)
    {
        if(h2>h1)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h2-h1-1,60-m1+m2);
        }
        else
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h2+23-h1,60-m1+m2);
        }
    }
    if(m1==m2)
    {
        if(h2>h1)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h2-h1,0);
        }
        if(h1<h2)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h2+24-h1,0);
        }
        if(h1==h2)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24,0);
        }
    }
    return 0;
}
