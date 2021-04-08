/**
*    author:  zin9
*    created: 08.04.2021 21:17:45
**/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int64_t N;
    cin >> N;
    unordered_set<int64_t> s;
    for (int64_t a = 2; a * a < N; a++)
    {
        int64_t x = a * a;
        while (x <= N)
        {
            s.insert(x);
            x *= a;
        }
    }
    cout << N - s.size() << endl;
    return 0;
}