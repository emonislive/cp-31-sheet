#include <iostream>
#include <climits>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    int size{}, minValue{INT_MAX};
    std::cin >> size;
    int arr;
    
    while (size--) {
        std::cin >> arr;
        if (abs(arr) < minValue)
            minValue = abs(arr);
    }
    std::cout << minValue << endl;
}

int main() {
    fastIO();
    solve();
    return 0;
}  
