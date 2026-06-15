#include <iostream>
#define endl '\n'
#define ll long long

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

/*
Ex: x = 0, n = 16

RULE:
if current x is even → move left  (x = x - i)
if current x is odd  → move right (x = x + i)

------------------------------------------------
cycle pattern repeats every 4 steps
------------------------------------------------

cycle 1
i:  1    2    3    4
x: -1    1    4    0
   E←   O→   O→   E←

cycle 2
i:  5    6    7    8
x: -5    1    8    0
   E←   O→   O→   E←

cycle 3
i:  9   10   11   12
x: -9    1   12    0
   E←   O→   O→   E←

cycle 4
i: 13   14   15   16
x:-13    1   16    0
   E←   O→   O→   E←
*/

void solve() {
    ll x{}, n{}, d{};
    std::cin >> x >> n;
    switch(n % 4) {
        case 0:
            d = 0;
            break;
        case 1: 
            d = -n;
            break;
        case 2:
            d = 1;
            break;
        case 3:
            d = n + 1;
            break;
    }

    if (x % 2 == 0)
        std::cout << x + d << endl;
    else
        std::cout << x - d << endl;

}
int main() {
    fastIO();
    int tt;
    std::cin >> tt;
    while (tt--)
        solve();

    return 0;
}
