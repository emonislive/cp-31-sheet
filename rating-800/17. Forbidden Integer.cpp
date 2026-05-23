#include <iostream>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    int n{}, k{}, x{};
    std::cin >> n >> k >> x;
    if (x == 1) {
        if (k == 1 || (k == 2 && n % 2 != 0))
            std::cout << "NO" << endl;
        else {
            std::cout << "YES" << endl;
            if (n % 2 == 0) {
                std::cout << n / 2 << endl;
                for (int i{}; i < n / 2; i++)
                    std::cout << 2 << " ";
                
                std::cout << endl;
            } else {
                std::cout << (n - 3) / 2 + 1 << endl; // ex: 7 = 2 2 3
                for (int i{}; i < (n - 3) / 2; i++)
                    std::cout << 2 << " ";
                
                std::cout << 3 << endl; // prints the single odd number.
            }
        }
    } else {
        std::cout << "YES" << endl << n << endl;
        for (int i{}; i < n; i++)
            std::cout << 1 << " ";

        std::cout << endl;
    }
}

int main()
{
    fastIO();
    int tt{};
    std::cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}
