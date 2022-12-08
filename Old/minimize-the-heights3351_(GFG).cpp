#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 0, k = 0;
    int arr[n];

    int mn = 0, mx = 0;
    sort(arr, arr + n);

    int ans = arr[n - 1] - arr[0];
    int sm = arr[0] + k;
    int lg = arr[n - 1] - k;
    for (int i = 0; i < n - 1; i++)
    {
        mn = min(sm, arr[i + 1] - k);
        mx = max(lg, arr[i] + k);
        if (mn < 0)
            continue;
        ans = min(ans, mx - mn);
    }

    return ans;
}