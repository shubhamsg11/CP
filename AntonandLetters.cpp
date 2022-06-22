#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    string d = "00000000000000000000000000";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ',' && s[i] != ' ')
        {
            d[int(s[i] - 'a')] = '1';
        }
    }
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (d[i] == '1')
            ans++;
    }

    cout << ans;
}