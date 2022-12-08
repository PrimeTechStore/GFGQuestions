#include <bits/stdc++.h>

using namespace std;

string isSubset(int a1[], int a2[], int n, int m)
{
    sort(a1, a1 + n);
    sort(a2, a2 + m);

    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a1[i] == a2[j])
        {
            i++;
            j++;
        }
        else if (a1[i] < a2[j])
            i++;
        else
            j++;
    }

    if (i == n)
        return "YES";
    else
        return "NO";
}

int main()
{
    int a1[] = {1, 2, 3, 4, 5};
    int a2[] = {1, 2, 4, 5};
    int n = sizeof(a1) / sizeof(a1[0]);
    int m = sizeof(a2) / sizeof(a2[0]);
    cout << isSubset(a1, a2, n, m) << endl;
    return 0;
}