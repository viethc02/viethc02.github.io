#include<iostream>
using namespace std;

int main()
{
    int n , x[10010], y[10010];
    cin >> n;
    for (int i = 0 ; i < n ; i++)
    {
        cin >> x[i] >> y[i];
    }
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = i + 1; j < n ; j++)
            if ( abs(x[i] - x[j]) == abs(y[i] - y[j]) )
            {
                cout << "yes";
                return 0;
            }
    }
    cout << "no";
    return 0;
}
