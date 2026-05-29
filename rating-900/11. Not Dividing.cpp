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
    
    for (ll i{}; i < size - 1; i++) {
        if (arr[i] == 1) arr[i]++;
        if (arr[i + 1] == 1) arr[i + 1]++;
        if (arr[i + 1] % arr[i] == 0) arr[i + 1]++;
    }
    for (ll out : arr)
        std::cout << out << " ";
  
    std::cout << endl;
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
