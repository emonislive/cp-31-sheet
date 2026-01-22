#include <iostream>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    int size{}, k{}, number{};
    bool flag = false;
    
    std::cin >> size >> k;
    while (size--) {
        std::cin >> number;
        
        if (number == k) 
            flag = true;
    }
    std::cout << (flag ? "YES" : "NO" ) << endl;
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
