#include <iostream>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    int x{}, k{};
    std::cin >> x >> k;
    if (x % k != 0) {
        std::cout << 1 << endl;
        std::cout << x << endl;
    } else {
        std::cout << 2 << endl;
        std::cout << 1 << " " << x - 1 << endl; 
    }   
}

int main() {
    fastIO();
    int tt{};
    std::cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
