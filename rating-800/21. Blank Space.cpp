#include <iostream>
#include <vector>
using namespace std;
#define op() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'

void solve()
{
    vector<int> v;
    int n, in;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> in;
        v.push_back(in);
    }
    int c = 0, max = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
            c++;
        else
        {
            if (max < c)
            {
                max = c;
            }
            c = 0;
        }
    }
    if (max < c)
        max = c;

    cout << max << endl;
}

int main()
{
    op();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
