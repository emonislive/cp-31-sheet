#include <iostream>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    int size{};
    std::cin >> size;
    int number{}, negative{}, positive{};
    while (size--) {
        std::cin >> number;
        if (number == 1)
            positive++;
        else
            negative++;
    }
    int operation{};
    while (negative > positive || negative % 2 != 0) {
        operation++;
        negative--;
        positive++;
    }
    std::cout << operation << endl;
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
