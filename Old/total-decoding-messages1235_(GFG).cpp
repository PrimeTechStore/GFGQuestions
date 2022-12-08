#include <bits/stdc++.h>
using namespace std;

int CountWays(string str)
{
    int count = str.length();
    for (int i = 0; i < str.length()-1; i++)
    {
        if (  int(str[i] + str[i+1]) < 26)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    string s;
    cin >> s;
    cout << CountWays(s);
}