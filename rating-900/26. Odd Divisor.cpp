#include <iostream>
#define endl '\n'
#define ll long long

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    ll n{};
    std::cin >> n;
    /*
     * odd numbers always have an odd divisor.
     * Example:
     * 5/5 == 1
     * 9/3 == 3
    
     * powers of 2 cannot be divided by any odd number. excluding 1
     * example:
     * 2, 4, 8, 16, 32 ... = 2^x

     * so, if n is not a power of 2 -> YES
     * otherwise -> NO
     * formula to find if n is a power of 2,
     ? (n & (n - 1)) == 0 is power of 2
     */
    if ((n & (n-1)) == 0)
        std::cout << "NO" << endl;
    else
        std::cout << "YES" << endl;
}

int main() {
    fastIO();
    ll tt{};
    std::cin >> tt;
    while (tt--)
        solve();
    
    return 0;
}
