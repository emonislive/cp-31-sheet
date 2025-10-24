#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long
#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);

void solve(ll oldSize) {
    string s;
    char ch;
    for (ll i = 0; i < oldSize; i++) {
        cin >> ch;
        s.push_back(ch);
    }

    ll newSize = oldSize;
    for (ll l = 0, r = oldSize - 1; l < r; l++, r--) {
        if ((s[l] == '0' && s[r] == '1') || (s[l] == '1' && s[r] == '0'))
            newSize -= 2;
        else
            break;
    }
    
    ll minLenPossible = newSize;
    cout << minLenPossible << endl;
}

int main() {
    fast_io();
    ll tt, oldSize;
    cin >> tt;
    while (tt--) {
        cin >> oldSize;
        solve(oldSize);
    }
    return 0;
}
