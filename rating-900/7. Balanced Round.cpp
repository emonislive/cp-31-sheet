    #include <iostream>
    #include <vector>
    #include <algorithm>
    #define endl '\n'
    #define ll long long

    void fastIO() {
        std::ios::sync_with_stdio(false);
        std::cin.tie(nullptr);
    }

    void solve() {
        ll max_length{}, k{};
        std::cin >> max_length >> k;
        std::vector<ll> arr(max_length);

        for (ll &in : arr)
            std::cin >> in;
        
        sort(arr.begin(), arr.end());
        ll current_largest_length{1}, largest_length{1};
        for (ll i{}; i < max_length - 1; i++) {
            if (arr[i + 1] - arr[i] <= k)
                current_largest_length++;
            else
                current_largest_length = 1;
        
            largest_length = std::max(largest_length, current_largest_length);
        }
        std::cout << max_length - largest_length << endl;
    }

    int main() {
        fastIO();
        int tt{};

        std::cin >> tt;
        while(tt--)
            solve();

        return 0;
    }
