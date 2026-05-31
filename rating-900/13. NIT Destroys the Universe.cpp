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
    ll size{};
    std::cin >> size;

    std::vector<ll> arr(size);
    for (ll &in : arr)
        std::cin >> in;
    
    bool flag{false};
    ll count{};
    for (ll i{}; i < size; i++) {
        if (arr[i] != 0 && !flag)
            flag = true;

        if (arr[i] == 0 && flag) {
            flag = false;
            count++;
        }   
    }
    if (flag) count++;
    std::cout << std::min(count, 2LL) << endl;
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
