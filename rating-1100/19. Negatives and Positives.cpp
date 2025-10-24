#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define endl '\n'
#define ll long long
#define fast_io() ios::sync_with_stdio(false); cin.tie(nullptr);

void solve(ll n) {
    vector <ll> vec(n);
    ll negative = 0, sum = 0;
    for (ll i = 0; i < n; i++) {
        cin >> vec[i];
        if (vec[i] < 0) {
            negative++;
            vec[i] = -vec[i]; // ? flipping the (-) into (+)
        }
        sum += vec[i];
    }
    sort(vec.begin(), vec.end()); // ? Sorting to get the smallest number on position vec[0]

    if (negative % 2 != 0) // ? Check if the number of negative numbers is odd
        sum -= 2 * vec[0]; // ? Subtract twice the smallest value to correct for the "over-flip"

    cout << sum << endl;
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
