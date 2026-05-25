#include <iostream>
#include <vector>
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

    int count{size};
    for (int i{}; i < size - 1; i++) {
        if ((arr[i] % 2) && (arr[i + 1] % 2)) // removing pair of odd numbers
            count--;
        else if (!(arr[i] % 2) && !(arr[i + 1] % 2)) // removing pair of even numbers
            count--;
    }
    
    std::cout << size - count << endl;
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
