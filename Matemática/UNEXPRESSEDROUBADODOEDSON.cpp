#include <bits/stdc++.h>

using namespace std;
using ll = long long;


constexpr int oo { 2'000'000'000 };

ll solve(ll N)
{
    set<ll> s;

    for (ll a = 2; a * a <= N; ++a)
        for (ll c = a*a; c <= N; c *= a)
            s.emplace(c);

    return N - s.size();
}

int main()
{
    ll N;
    cin >> N;

    cout << solve(N) << '\n';

    return 0;
}
