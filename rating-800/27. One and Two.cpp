#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    int size; 
    cin >> size;

    int totalTwo = 0;
    vector <int> arr(size);
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        if (arr[i] == 2)
            totalTwo++;
    }

    int currentTwo = 0, position = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] == 2)
            currentTwo++;
        
        if (currentTwo == (totalTwo - currentTwo)) {
            position = i + 1;
            break;
        }
    }
    cout << position << endl;
}

int main() {
    fastIO();
    int tc;

    cin >> tc;
    while (tc--)
        solve();

    return 0;
}
