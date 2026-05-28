#include <iostream>
#include <vector>
#define endl '\n'

void fastIO()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    int n{};
    std::cin >> n;

    std::string s(n, ' ');
    for (int i{}; i < n; i++) {
        std::cin >> s[i];
    }
    
    int unique_number{1}, current{1};
    for (int i{}; i < n - 1; i++) {
        if (s[i] == s[i + 1])
            current++;
        else
            current = 1;

        unique_number = std::max(unique_number, current);
    }
    std::cout << unique_number + 1 << endl;
}

int main()
{
    fastIO();
    int tt{};

    std::cin >> tt;
    while (tt--)
        solve();

    return 0;
}
