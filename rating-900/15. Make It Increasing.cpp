#include <iostream>
#include <vector>
#define endl '\n'
#define ll long long

void fastIO()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    ll size {};
    std::cin >> size;
    
    std::vector<ll> arr(size);
    for (ll &in : arr)
        std::cin >> in;
    
    ll count{};
    for (ll i = size - 2; i >= 0; i--) {
        while (arr[i] >= arr[i + 1] and arr[i] > 0) {
            arr[i] /= 2;
            count++;
        }
        if (arr[i] >= arr[i + 1]) {
            std::cout << -1 << endl;
            return;
        }
    }
    std::cout << count << endl;
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
