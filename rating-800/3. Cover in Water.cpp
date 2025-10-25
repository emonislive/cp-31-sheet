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
    string s = "";
    char character = '\0';
    bool flag = false;
    int size = 0, emptyCell = 0;

    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> character;
        s.push_back(character);

        if (character == '.')
            emptyCell++;
    }

    for (int i = 0; i < size - 2; i++)
    {
        if (s.substr(i, 3) == "...")
        {
            flag = true;
            break;
        }
    }

    cout << (flag ? 2 : emptyCell) << endl;
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
    return 0;
}
