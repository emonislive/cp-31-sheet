#include <iostream>
#include <set>
using namespace std;
#define endl '\n'
#define ll long long
#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);

void solve(ll n) {
    string s;
    cin >> s; 

    set<char> leftSet, rightSet;
    ll distinctLeft[n], distinctRight[n];

    // ! Count distinct characters from left to right
    for (ll i = 0; i < n; i++) {
        leftSet.insert(s[i]);
        distinctLeft[i] = leftSet.size();
    }

    // ! Count distinct characters from right to left
    for (ll i = n - 1; i >= 0; i--) {
        rightSet.insert(s[i]);
        distinctRight[i] = rightSet.size();
    }

    // ! Try every possible split and maximize distinct count
    ll maxVal = 0;
    for (ll i = 0; i < n - 1; i++) {
        maxVal = max(maxVal, distinctLeft[i] + distinctRight[i + 1]);
    }

    cout << maxVal << endl;
}

int main() {
    fast_io();
    ll tt, n;
    cin >> tt;
    while (tt--) {
        cin >> n;
        solve(n);
    }
    return 0;
}
