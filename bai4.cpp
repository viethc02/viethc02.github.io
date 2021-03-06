#include<iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x) {
  if (r >= l) {
    int mid = l + (r - l) / 2;

    if (arr[mid] == x)
      return mid;

    if (arr[mid] > x)
      return binarySearch(arr, l, mid - 1, x);

    return binarySearch(arr, mid + 1, r, x);
  }
  return -1;
}
int main()
{
    int n, x , a[100100];
    cin >> n >> x;
    for (int i = 1; i <= n ;i++)
    {
        cin >> a[i];
    }
    int kt = binarySearch(a,1,n,x);
    if (kt != -1)
    {
        cout << "YES";
    }
    else cout << "NO";
}

