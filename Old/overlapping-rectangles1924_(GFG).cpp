#include <bits/stdc++.h>
using namespace std;

int doOverlap(int L1[], int R1[], int L2[], int R2[])
{
    if (L1[0] == R1[0] || L1[1] == R1[1] || R2[0] == L2[0] || L2[1] == R2[1])
        return 0;
    if (L1[0] > R2[0] || L2[0] > R1[0])
        return 0;
    if (R1[1] > L2[1] || R2[1] > L1[1])
        return 0;

    return 1;
}

int main()
{
    // L1=(0,10)
    // R1=(10,0)
    // L2=(5,5)
    // R2=(15,0)
    int L1[2] = {0, 10};
    int R1[2] = {10, 0};
    int L2[2] = {5, 5};
    int R2[2] = {15, 0};
    int result = doOverlap(L1, R1, L2, R2);
    cout << result << endl;
}