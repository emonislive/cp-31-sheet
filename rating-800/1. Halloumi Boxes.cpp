#include <iostream>
#include <vector>
using namespace std;
#define endl '\n'

void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve()
{
    int numberOfBoxes, maxLength;
    cin >> numberOfBoxes >> maxLength;

    vector<int> boxes(numberOfBoxes);
    for (int i = 0; i < numberOfBoxes; i++)
        cin >> boxes[i];

    if (maxLength > 1)
    {
        cout << "YES" << endl;
        return;
    }

    bool sorted = true;
    for (int i = 1; i < numberOfBoxes; i++)
    {
        if (boxes[i - 1] > boxes[i])
        {
            sorted = false;
            break;
        }
    }
    cout << (sorted ? "YES" : "NO") << endl;
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
