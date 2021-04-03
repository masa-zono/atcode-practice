/**
*    author:  zin9
*    created: 04.04.2021 01:43:13
**/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    int n = N;
    for (int i = 0; i < K; i++)
    {
        string ns = to_string(n);
        sort(ns.begin(), ns.end(), std::greater<int>{});
        int g1 = atoi(ns.c_str());
        sort(ns.begin(), ns.end());
        int g2 = atoi(ns.c_str());
        n = g1 - g2;
    }
    cout << n << endl;
    return 0;
}