#include <iostream>
#include <vector>
#define endl '\n'
#define ll long long

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    ll size{};
    std::cin >> size;

    std::vector<ll> arr(size);
    for (auto &in : arr)
        std::cin >> in;

    bool flag = false;
    for (ll i{}; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            flag = true;
            break;
        }
    }
    if (!flag) {
        ll minimum_operation = INT_MAX;
        for (ll i{}; i < size - 1; i++) {
            if (arr[i] <= arr[i + 1]) {
                ll difference = (arr[i + 1] - arr[i]);
                difference /= 2;    // ? to find the total operation needed to make the values equal, ex: a == b
                difference++;       // ? add one extra operation to find the values difference occurred operation no. ex: a > b
                minimum_operation = std::min(minimum_operation, difference);
            }
        }
        std::cout << minimum_operation << endl;
    } else {
        std::cout << 0 << endl;
    }
}

int main() {
    fastIO();
    ll tt{};
    std::cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
