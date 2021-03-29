/**
*    author:  zin9
*    created: 30.01.2021 21:12:28
**/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m;
    vector<pair<int, int>> rule(m);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        rule[i].first = a;
        rule[i].second = b;
    }
    cin >> k;
    vector<pair<int, int>> choice(k);
    for (int i = 0; i < k; i++)
    {
        int c, d;
        cin >> c >> d;
        choice[i].first = c;
        choice[i].second = d;
    }
    int ans = 0;
    auto g = 1 << k;
    cout << g << endl;
    for (int i = 0; i < 1 << k; i++)
    {
        vector<bool> ball(n);
        for (int j = 0; j < k; j++)
        {
            pair<int, int> c = choice[i];
            ball[i & 1 << i ? c.first : c.second] = 1;
        }
        int cnt = 0;
        for (auto r : rule)
        {
            if (ball[r.first] && ball[r.second])
            {
                cnt++;
            }
        }
        if (ans < cnt)
        {
            ans = cnt;
        }
    }
    cout << ans << endl;

    return 0;
}
