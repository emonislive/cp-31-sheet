#include <iostream>
#define endl '\n'
#define ll long long 

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    ll n{}, k{}, x{};
    std::cin >> n >> k >> x;

    ll minimum_sum = k * (k + 1) / 2; // find smallest sum of n number between x range
    ll maximum_sum = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;  // find largest sum of n number between x range

    if  (x <= maximum_sum && x >= minimum_sum)
        std::cout << "YES" << endl;
    else
        std::cout << "NO" << endl;
}

int main() {
    fastIO();
    ll tt{};

    std::cin >> tt;
    while(tt--)
        solve();

    return 0;
}
