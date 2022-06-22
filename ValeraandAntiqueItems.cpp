#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, v;
    cin >> n >> v;

    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        bool d = false;

        for (int j = 0; j < k; j++)
        {
            int s;
            cin >> s;
            if ( !d && v > s)
            {
                ans.push_back(i);
                d = true;
              
            }
        }
    }

    cout << ans.size() << endl;

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] + 1 <<" ";
}