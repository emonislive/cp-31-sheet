#include <iostream>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    int a{}, b{}, c{};
    std::cin >> a >> b >> c;

     if (c % 2 == 0) { // Anna's turn
        if (a > b)
            std::cout << "First" << endl;
        else
            std::cout << "Second" << endl;
    } else { // Katie's turn
        if (a < b)
            std::cout << "Second" << endl;
        else
            std::cout << "First" << endl;
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
