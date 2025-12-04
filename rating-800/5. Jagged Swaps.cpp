#include <iostream>
#include <vector>
#include <climits>
using namespace std;
#define endl '\n'

void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve()
{
    int size;
    cin >> size;

    vector<int> arr(size);
    int minVal = INT_MAX;
    int maxVal = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        minVal = min(arr[i], minVal);
        maxVal = max(arr[i], maxVal);
    }

    if (minVal < 1 || maxVal > size)
        cout << "NO" << endl;
    else if (arr[0] != minVal)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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
