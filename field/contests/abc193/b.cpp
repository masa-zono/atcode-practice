/**
*    author:  zin9
*    created: 07.04.2021 02:17:11
**/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int minP = 1000000001;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        int a, p, x;
        cin >> a >> p >> x;
        int y = x - a;
        if (y > 0)
        {
            minP = std::min(minP, p);
            flag = true;
        }
    }
    if (flag)
    {
        cout << minP << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}