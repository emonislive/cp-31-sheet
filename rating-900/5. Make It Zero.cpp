#include <iostream>
#define endl '\n'


void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    int size{};
    std::cin >> size;
    int number{};
    for (int i{}; i < size; i++)
        std::cin >> number;
    
    if (size % 2 == 0) {
        /*
        * ex:
        * x ^ x = 0,
        * 
        * 1 2 3 4
        * ↓
        * x x x x  step 1
        * ↓
        * 0 0 0 0  step 2
        */  
        std::cout << 2 << endl;
        std::cout << 1 << " " << size << endl;
        std::cout << 1 << " " << size << endl;
    }
    else {
        /*
        * ex: 
        * 1 2 3 4 5
        * ↓
        * x x x x x  step 1
        * ↓
        * x 0 0 0 0  step 2
        * ↓
        * x x 0 0 0  step 3
        * ↓
        * 0 0 0 0 0  step 4
        */ 
        std::cout << 4 << endl;
        std::cout << 1 << " " << size << endl; 
        std::cout << 2 << " " << size << endl;
        std::cout << 1 << " " << 2 << endl;
        std::cout << 1 << " " << 2 << endl;
    }
}

int main() {
    fastIO();
    int tt{};

    std::cin >> tt;
    while(tt--)
        solve();

    return 0;
}
