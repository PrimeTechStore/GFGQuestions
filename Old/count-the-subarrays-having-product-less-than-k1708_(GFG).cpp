#include <bits/stdc++.h>
using namespace std;

int countSubArrayProductLessThanK(const vector<int> &a, int n, long long k)
{
    long long prod = 1;
    int ans = 0;
    int j = 0, i = 0;

    while (j < n)
    {
        prod *= a[j];
        while (i <= j and prod >= k)
        {
            prod /= a[i];
            i++;
        }

        ans += (j - i + 1);
        j++;
    }

    return ans;
}

int main()
{
    vector<int> a = {10, 5, 2, 6};
    int n = a.size();
    int k = 100;
    cout << countSubArrayProductLessThanK(a, n, k) << endl;
}