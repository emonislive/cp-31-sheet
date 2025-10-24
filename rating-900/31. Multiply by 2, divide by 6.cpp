#include <iostream>
using namespace std;
#define endl '\n'
#define ll long long

void solve()
{
    ll num, two = 0, three = 0;
    cin >> num;
    while (num % 2 == 0)
    {
        two++;
        num /= 2;
    }
    while (num % 3 == 0)
    {
        three++;
        num /= 3;
    }
    if (num == 1 && two <= three)
    {
        ll ans = (three - two) + three;
        cout << ans << endl;
    }
    else
        cout << -1 << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
