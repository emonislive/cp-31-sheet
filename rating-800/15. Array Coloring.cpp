#include <iostream>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    int total_numbers{};
    std::cin >> total_numbers;
    int sum{};
    while (total_numbers--) {
        int number{};
        std::cin >> number;
        sum += number;
    }
    if (sum % 2 == 0)
        std::cout << "YES" << endl;
    else 
        std::cout << "NO" << endl;
}

int main() {
    fastIO();
    int tt{};
    std::cin >> tt;
    while (tt--)
        solve();
    
    return 0;
}
