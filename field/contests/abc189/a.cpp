#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define repi(i, a, n) for (int i = (int)a; i < (int)(n); i++)
#define ll long long

int main(void)
{
    string r;
    std::cin >> r;
    if (r[0] == r[1] && r[1] == r[2] && r[0] == r[2])
    {
        std::cout << "Won" << std::endl;
    }
    else
    {
        std::cout << "Lost" << std::endl;
    }
}