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
    int distance, endPoint;
    int previousPoint = 0, gasNeed = 0, currentGasNeed = 0, returnGasNeed = 0, minimumGasNeed = 0;
    cin >> distance >> endPoint;

    vector<int> gasStations(distance);
    for (int i = 0; i < distance; i++)
        cin >> gasStations[i];

    previousPoint = 0, gasNeed = 0, currentGasNeed = 0;
    for (int i = 0; i < distance; i++)
    {
        currentGasNeed = gasStations[i] - previousPoint;
        gasNeed = max(gasNeed, currentGasNeed);
        previousPoint = gasStations[i];
    }
    returnGasNeed = 2 * (endPoint - previousPoint); // ? station --> x [arrival], then, station <-- x [return], (2 * gas need) 
    minimumGasNeed = max(gasNeed, returnGasNeed);
    cout << minimumGasNeed << endl;
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
