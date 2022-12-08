#include <bits/stdc++.h>

using namespace std;

long long int inversionCount(long long arr[], long long N)
{
    long long count = 0;
    for (int i = 0; i < N - 1; i++)
        for (int j = i + 1; j < N; j++)
            if (arr[i] > arr[j])
                count++;
    return count;
}

int main()
{
    long long arr[] = {2, 4, 1, 3, 5};
    long long n = sizeof(arr) / sizeof(arr[0]);
    cout << inversionCount(arr, n);
}