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
    
    std::vector<int> arr(size), ans;
    for (int &in : arr) 
        std::cin >> in;

    ans.push_back(arr[0]);
    for (int i{1}; i < size; i++) {
        if (arr[i] < arr[i - 1]) {
            int temp = arr[i] - 1;
            if (temp != 0) 
                ans.push_back(temp);
            else 
                ans.push_back(1);
        }
        ans.push_back(arr[i]);
    }
    
    std::cout << ans.size() << endl;
    for (int in : ans)
        std::cout << in << " ";
    
    std::cout << endl;
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
