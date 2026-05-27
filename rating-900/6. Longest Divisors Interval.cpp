#include <iostream>
#define endl '\n'
#define ll long long

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    ll number{}, count{1};
    std::cin >> number;

    while (number % count == 0) 
        count++;
        
    std::cout << count - 1 << endl;
}

int main() {
    fastIO();
    int tt{};

    std::cin >> tt;
    while(tt--)
        solve();

    return 0;
}
