#include <iostream>
#include <vector>
#define endl '\n'
#define ll long long 

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    ll a{}, b{}, n{};
    std::cin >> a >> b >> n;

    std::vector<ll> arr(n);
    for (ll &in : arr)
        std::cin >> in;

    ll count{b};
    for (ll i{}; i < n; i++) {
        count += std::min(arr[i], a - 1);
    }
    std::cout << count << endl;
}

int main() {
    fastIO();
    ll tt{};

    std::cin >> tt;
    while(tt--)
        solve();

    return 0;
}
