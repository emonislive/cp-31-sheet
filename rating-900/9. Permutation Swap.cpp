#include <iostream>
#include <vector>
#include <numeric>
#define endl '\n'

void fastIO()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    int size{};
    std::cin >> size;
    
    std::vector<int> arr(size + 1);
    for (int i{1}; i <= size; i++) 
        std::cin >> arr[i];
    
    int answer{};
    for (int i{1}; i <= size; i++)
        answer = std::gcd(answer, abs(arr[i] - i));
    
    std::cout << answer << endl;
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
