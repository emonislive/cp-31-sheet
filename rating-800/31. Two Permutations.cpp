#include <iostream>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    int n, a, b;
    std::cin >> n >> a >> b;

    if ((a + b + 2 <= n) || (a == b && b == n))
        std::cout << "Yes" << endl;
    else
        std::cout << "No" << endl;
}

int main() {
    fastIO();
    int tt;
    std::cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
