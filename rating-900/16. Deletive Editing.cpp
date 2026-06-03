#include <iostream>
#include <unordered_map>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    std::string s, t;
    std::cin >> s >> t;

    std::unordered_map<char, int> freq;
    for (int i{}; i < t.size(); i++)
        freq[t[i]]++;
    
    for (int i{s.size() - 1}; i >= 0; i--) {
        if (freq[s[i]] > 0) {
            freq[s[i]]--;
        } else {
            s[i] = '.';
        }
    }
    std::string final_string;
    for (int i{}; i < s.size(); i++) {
        if (s[i] != '.') {
            final_string += s[i];
        }
    }

    if (final_string == t)
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
