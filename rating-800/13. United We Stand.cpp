#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    int n{};
    std::cin >> n;

    std::vector<int> arr(n);
    for (auto &in : arr) 
        std::cin >> in;
    
    if (n == 1) {
        std::cout << -1 << endl;
        return;
    }

    sort(arr.begin(), arr.end());
    std::vector<int> b, c;
    int mx = arr[n - 1];

    for (int i = 0; i < n; i++) {
        if (arr[i] != mx)
            b.push_back(arr[i]);
        else
            c.push_back(arr[i]);
    }

    if (b.size() == 0) {
        std::cout << -1 << endl;
        return;
    }

    std::cout << b.size() << " " << c.size() << endl;
    for (int i{}; i < b.size(); i++) 
        std::cout << b[i] << " ";

    std::cout << endl;
    for (int i{}; i < c.size(); i++) 
        std::cout << c[i] << " ";
    
    std::cout << endl;
    
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
