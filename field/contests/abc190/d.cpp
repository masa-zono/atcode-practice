/**
*    author:  zin9
*    created: 30.01.2021 21:23:59
**/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n;
    cin >> n;
    int ans = 1;
    for (long int i = 2; pow(i, 2) + i <= n; i++)
    {
        for (long int j = -1 * n + 1; (2 * j + i - 1) * i < 2 * n + 1; j++)
        {
            if ((2 * j + i - 1) * i == n * 2)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}