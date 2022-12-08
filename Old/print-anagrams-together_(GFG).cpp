#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> Anagrams(vector<string> &string_list)
{
    vector<vector<string>> result;
    unordered_map<string, vector<string>> map;
    for (auto &str : string_list)
    {
        string key = str;
        sort(key.begin(), key.end());
        map[key].push_back(str);
    }
    for (auto &kv : map)
    {
        result.push_back(kv.second);
    }
    return result;
}

int main()
{
    vector<string> string_list = {"cat", "dog", "god", "tac", "act"};
    vector<vector<string>> result = Anagrams(string_list);
    for (auto &v : result)
    {
        for (auto &str : v)
        {
            cout << str << " ";
        }
        cout << endl;
    }
}