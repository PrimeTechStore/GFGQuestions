#include <bits/stdc++.h>
using namespace std;

string encode(string src)
{
    string res = "";
    int count = 1;
    for (int i = 1; i < src.length(); i++)
    {
        if (src[i] == src[i - 1])
            count++;
        else
        {
            res += src[i - 1];
            res += to_string(count);
            count = 1;
        }
    }
    res += src[src.length() - 1];
    res += to_string(count);
    return res;
}

int main()
{

    string src;
    cin >> src;
    cout << encode(src) << endl;
    return 0;
}