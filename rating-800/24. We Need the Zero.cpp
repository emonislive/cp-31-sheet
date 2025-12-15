#include <iostream>
#include <vector>
#include <random>
using namespace std;
#define endl '\n'

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int randomNumber() {
    // ! Static engine - created ONLY ONCE
    // ? Random number engine initialization [from random.h]
    static mt19937 engineInit(random_device{}()); 

    // ? Range Define [from random.h]
    static uniform_int_distribution<int> randomRange(0,255); 

    // ? Generate random number
    int number = randomRange(engineInit); 
    return number; 
}

void solve() {
    int size;
    cin >> size;

    vector<int> arr(size);
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    
    int totalXOR = 0;
    for (int i = 0; i < size; i++)
        totalXOR ^= arr[i];

    if (size % 2 != 0)
        cout << totalXOR << endl;
    else {
        if (totalXOR == 0)
            cout << randomNumber() << endl;
        else 
            cout << -1 << endl;
    }
}

int main() {
    fastIO();
    int tc;

    cin >> tc;
    while (tc--)
        solve();

    return 0;
}
