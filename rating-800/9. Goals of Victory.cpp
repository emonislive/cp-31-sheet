#include <iostream>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    int size{}, number{}, sum{};
    std::cin >> size;
    --size;
    while(size--) {
        std::cin >> number;
        sum += number;
    }
    std::cout << sum * -1 << endl;
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
