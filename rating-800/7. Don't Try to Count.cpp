#include <iostream>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    std::string s, x;
    int n{}, m{}, count{};
    bool flag = false;

    std::cin >> n >> m;
    std::cin >> x >> s;

    /* 
     ? only doing 6 times checking because the max length of the string only can be 25. 
     ? example: 
     * worst case: x = 1, s = 25
     * loop 0 = a (1)
     * loop 1 = aa (2)
     * loop 3 = aaaa (4)
     * loop 4 = aaaaaaaa (8)
     * loop 5 = aaaaaaaaaaaaaaaa (16)
     ! loop 6 = aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa (32) [Crosses the 25 limit]
    */

    for (int i = 0; i < 6; i++) {
        size_t found = x.find(s);
        if (found != std::string::npos) {
            flag = true;
            break;
        }
        x += x;
        count++;
    }
    if (flag)
        std::cout << count << endl;
    else
        std::cout << -1 << endl;
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
