#include <bits/stdc++.h>

using namespace std;

int minJumps(int a[], int n)
{
    int cnt = 0, c = 0, r = 0;
    if (a[0] == 0 && n == 1)
        return 0;
    for (int i = 0; i < n; i++)
    {
        if (i > c)
        {
            c = r;
            cnt++;
        }
        if (i <= r)
            r = max(r, i + a[i]);
        else
            break;
    }
    if (r < n)
        return -1;
    else
        return cnt;
}

int main()
{
    int arr[] = {2, 3, 1, 1, 2, 4, 2, 0, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << minJumps(arr, n);
    return 0;
}