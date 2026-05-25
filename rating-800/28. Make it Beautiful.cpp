#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    int size{};
    std::cin >> size;
    
    std::vector<int> arr(size);
    for (int &in : arr) 
        std::cin >> in;

    sort(arr.begin(), arr.end());
    if (arr[0] == arr[size - 1])
        std::cout << "NO" << endl;
    else {
        std::cout << "YES" << endl;
        for (int i{}, j{size - 1}; i < j; i++, j--)
            std::cout << arr[j] << " " << arr[i] << " ";
        
        int mid = size / 2;
        if (size % 2 != 0)
            std::cout << arr[mid] << endl;
        else 
            std::cout << endl;
    }
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
