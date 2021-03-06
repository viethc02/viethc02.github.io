#include<iostream>
using namespace std;

int sqr(int x)
{
    return x * x;
}

int Pow(int a , int b , int mod)
{
    if (b == 0)
        return 1 % mod;
    else
        if (b % 2 == 0)
            return sqr( Pow(a , b / 2 , mod) ) % mod;
        else
            return a * (sqr( Pow(a , b / 2 , mod) ) % mod ) % mod;
}
int main()
{
    int a , b , m;
    cin >> a >> b >> m;
    cout << Pow(a,b,m);
    return 0;
}
