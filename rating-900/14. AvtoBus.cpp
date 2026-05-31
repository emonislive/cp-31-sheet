#include <iostream>
#include <cmath>
#define endl '\n'
#define ll long long

void fastIO()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    ll number{};
    std::cin >> number;

    // ? ceil(a/b) cause overflow for long long int
    // ! so, (a + b - 1) / b formula used. works same as the ceil();
    ll six_wheels = (number + 6 - 1) / 6; 
    ll four_wheels = number / 4LL;

    if (number % 2 != 0 || number < 4)
        std::cout << -1 << endl;
    else 
        std::cout << six_wheels << " " << four_wheels << endl;
    
}

int main()
{
    fastIO();
    ll tt{};

    std::cin >> tt;
    while (tt--)
        solve();

    return 0;
}
