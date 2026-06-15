#include <iostream>
#define endl '\n'
#define ll long long

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    ll a{}, b{}, c{};
    std::cin >> a >> b >> c;
    bool condition{false};
    /*
     ! Condition 1
     *   (a * m), b, c
     * => -am = c - 2b
     * => am = -c + 2b
     * => m = (2b - c) / a
     */
    if ((2 * b - c) % a == 0) {
        if ((2 * b - c) / a > 0)
            condition = true;
    }

    /*
     ! Condition 2
     *    a, (b * m), c
     * => bm - a = c - bm
     * => 2bm = c + a
     * => m = (c + a) / 2b
     */
    if ((c + a) % (2 * b) == 0)
        condition = true;

    /*
     ! Condition 3
     *    a, b, (c * m)
     * => b - a = cm - b
     * => 2b - a = cm
     * => m = (2b - a) / c
     */
    if ((2 * b - a) % c == 0) {
        if ((2 * b - a) / c > 0)
            condition = true;
    }

    if (a == b && b == c)
        condition = true;
        
    if (condition)
        std::cout << "YES" << endl;
    else
        std::cout << "NO" << endl;
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
