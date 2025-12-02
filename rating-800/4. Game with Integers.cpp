#include <iostream>
using namespace std;
#define endl '\n'

void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve()
{
    int number;
    cin >> number;

    int moves = 10;
    while (moves--)
    {
        if (number % 3 == 0)
        {
            if (moves % 2 == 0)
            {
                cout << "Second" << endl;
                return;
            }
        }
    }
    cout << "First" << endl;
}

int main()
{
    fastIO();
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        solve();
    }
}
