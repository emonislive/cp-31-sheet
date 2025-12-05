#include <iostream>
#include <vector>
#include <unordered_map>
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
    unordered_map<int, int> numbers;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        numbers[arr[i]]++;
    }

    if (numbers.size() == 1)
    {
        cout << "Yes" << endl;
        return;
    }

    if (numbers.size() > 2)
    {
        cout << "No" << endl;
        return;
    }

    int evenIndex = size / 2;
    int oddIndex = size / 2;

    if (size % 2 != 0)
        ++oddIndex;

    bool condition1 = false, condition2 = false;
    for (auto num : numbers)
    {
        if (num.second == evenIndex)
            condition1 = true;
        if (num.second == oddIndex)
            condition2 = true;
    }

    if (condition1 && condition2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
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
