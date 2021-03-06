#include<iostream>
using namespace std;

void sangnt(bool kt[], int n )
{
    kt[1] = false;
    for (int i = 2 ; i <= n; i ++)
    {
        if (kt[i] == true)
            for (int j = 2 ; i * j <= n ; j++)
                kt[i*j] = false;
    }
}

int main()
{
    int n;
    bool kt[100100];
    cin >> n;
    for (int i = 1; i <= n ;i++)
    {
        kt[i] = true;
    }
    sangnt(kt,n);
    for (int i = 1 ; i <= n ;i++)
    {
        if (kt[i] == true)
            cout << i << ' ';
    }
    return 0;
}

