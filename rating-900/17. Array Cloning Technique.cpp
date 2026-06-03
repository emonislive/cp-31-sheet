#include <iostream>
#include <vector>
#include <unordered_map>
#define endl '\n'
#define ll long long


void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    ll size{}, max_freq{INT_MIN}, operation{};
    std::cin >> size;
    
    std::vector<ll> arr(size);
    std::unordered_map<ll, ll> freq;
    for (ll &in : arr) {
        std::cin >> in;
        freq[in]++;

        if (freq[in] > max_freq)
            max_freq = freq[in];
    }

    while (max_freq < size) {
        operation++; // to clone the array
      
        if (max_freq * 2 <= size) {
            operation += max_freq;
            max_freq *= 2;
        } else {
            operation += size - max_freq;
            max_freq = size;
        }
    }
    std::cout << operation << endl;
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
