#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve()
{
    ll k, n;
    cin >> k >> n;

    if (k % 2 != 0 && n % 2 == 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

int main()
{
    fastIO();
    int tc;
    cin >> tc;
  
    while (tc--)
        solve();

    return 0;
}
