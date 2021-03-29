/**
*    author:  zin9
*    created: 30.01.2021 21:07:02
**/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, s, d;
    cin >> n >> s >> d;
    bool ans = false;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        if (s > x && y > d)
        {
            ans = true;
        }
    }
    puts(ans ? "Yes" : "No");

    return 0;
}