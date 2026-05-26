#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    int size{}, character_delete{};
    std::cin >> size >> character_delete;

    std::string s(size, ' ');
    std::unordered_map<char, int> freq;
    for (int i{}; i < size; i++) {
        std::cin >> s[i];
        freq[s[i]]++;
    }

    int odd{};
    for (auto ch : freq) {
        if (ch.second % 2 != 0)
            odd++;
    }

    if (odd - 1 <= character_delete)
        std::cout << "YES" << endl;
    else
        std::cout << "NO" << endl;
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
