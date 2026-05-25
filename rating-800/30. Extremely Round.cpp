#include <iostream>
#include <vector>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

bool check(int number) {
    int digit{}, zero{};
    while (number) {
        if (number % 10 == 0)
            zero++;
        digit++;
        number /= 10;
    }
    return zero == digit - 1; // * because extreme round has only one non zero digit. ex: 5000 = 000(3), 5000(4)
}

void solve(std::vector<int> &precompile) {
    int number{};
    std::cin >> number;
    
    int count{};
    for (int i{}; i < precompile.size(); i++) {
        if (precompile[i] <= number)
            count++;
        else
            break;
    }
    std::cout << count << endl;
}

int main() {
    fastIO();
    // ?  precompiling so that we do not hit the TLE
    std::vector<int> precompile;
    for (int i{1}; i <= 999999; i++) {
        if (check(i))
            precompile.push_back(i);
    }
    
    int tt{};
    std::cin >> tt;
    while (tt--) {
        solve(precompile);
    }
    return 0;
}
