#include <iostream>
#include <numeric>
#include <vector>
#define endl '\n'
#define ll long long

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    ll size{};
    std::cin >> size;

    std::vector<ll> arr(size);
    for (ll &in : arr) 
        std::cin >> in;

    for (ll i{}; i < size; i++) {
        for (ll j{i + 1}; j < size; j++) {
            if (std::gcd(arr[i], arr[j]) <= 2) {
                std::cout << "Yes" << endl;
                return;
            }
        }
    }
    std::cout << "No" << endl;
}

int main() {
    fastIO();
    ll tt{};
    std::cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
