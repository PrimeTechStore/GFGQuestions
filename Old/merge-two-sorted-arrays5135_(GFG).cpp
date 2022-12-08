#include <bits/stdc++.h>

using namespace std;

void merge(int arr1[], int arr2[], int n, int m)
{
    int i = 0;
    reverse(arr1, arr1 + n);
    while (i < min(n, m) && arr1[i] > arr2[i])
    {
        swap(arr1[i], arr2[i]);
        i++;
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}

int main()
{
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    merge(arr1, arr2, n, m);
    return 0;
}