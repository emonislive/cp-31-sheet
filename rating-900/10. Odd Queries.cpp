#include <iostream>
#include <vector>
#define endl '\n'
#define ll long long

void fastIO()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    ll n{}, q{};
    std::cin >> n >> q;

    std::vector<ll> arr(n + 1, 0);
    for (ll i{1}; i <= n; i++)
        std::cin >> arr[i];

    std::vector<ll> prefix_sum(n+1, 0);
    for (ll i{1}; i <= n; i++) {
        prefix_sum[i] = arr[i] + prefix_sum[i - 1];
    }

    ll l{}, r{}, k{};
    for (ll i{}; i < q; i++) {
        std::cin >> l >> r >> k;
        ll sum{prefix_sum[n]};
        
        sum -= prefix_sum[r] - prefix_sum[l - 1];  // deleting the sum of arr[r] to arr[l] range
        sum += (r - l + 1LL) * k; // adding the swapped k number to that sum range
        
        if (sum % 2 == 0)
            std::cout << "NO" << endl;
        else
            std::cout << "YES" << endl;
    }
}

int main()
{
    fastIO();
    ll tt{};

    std::cin >> tt;
    while (tt--)
        solve();

    return 0;
}
