#include <iostream>
#include <vector>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    int n{};
    std::cin >> n;
    
    std::vector<int> a(n);
    for (int &in : a)
        std::cin >> in;

    /*
     * index     :  a[0]    a[1]    a[2]    a[3]    a[4]
     * input     :    1       2       4       5       3      (n = 5)
     * output    : (6+1-1) (6+1-2) (6+1-4) (6+1-5) (6+1-3)   (n + 1 - a[i])
     * result    :    5       4       2       1       3      (b[i])
     * difference:    6  <=   6  <=   6  <=   6  <=   6      (a[i] + b[i] <= a[i+1] + b[i+1])
    */
    for (int i{}; i < n; i++)
        std::cout << n + 1 - a[i] << " ";
    
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
