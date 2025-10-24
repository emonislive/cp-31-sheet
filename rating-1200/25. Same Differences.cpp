/*
 TODO: INSTALL : "Better Comments" EXTENTION for highlighted comments (* - green, ? - blue, ! - red, TODO: - orange)
 TODO: INSTALL : "TODO Highlight" EXTENSION for highlight specific word (TODO: , FIXME:, etc.. customizable)
 TODO: INSTALL : "Fira Code" (Bold) FONT and add the FONT as your main FONT in your IDE/TEXT EDITOR to beautify the syntax
 TODO: INSTALL : "SynthWave '84" COLOR THEME to finalize the beautification for your IDE/TEXT EDITOR

  You will thank me later :)

 ! Question Given, count the pair (i, j) if,
 ? => a[j] - a[i] = j - i ------------> Time Complexity O(n^2)  [brute force approach]
 ? => a[j] - j = a[i] - i ------------> Time Complexity O(n)    [same thing but by changing the formula order it reduced the time complexity from (n * n) to (n)]

 * ------------- Example ------------------
 * array      - a[i]        : 3 5  1 4 6 6
 * position   - (i)         : 0 1  2 3 4 5
 * difference - (a[i] - i)  : 3 4 -1 1 2 1
 ? paired numbers           :        1   1
 *                              (occurred 2 times hence, answer is 1)
 *                              [count begins from 0]
*/


#include <iostream>
#include <unordered_map>
using namespace std;
#define endl '\n'
#define ll long long

void solve() {
    ll size, count = 0, in;
    cin >> size;
    unordered_map<ll, ll> pairCount;

    for (ll i = 0; i < size; i++) {
        cin >> in;  // a[i]
        in -= i;    // a[i] - i

        count += pairCount[in]; // * checking if there any pair appeared 
        pairCount[in]++;        // * tracking the frequency of the numbers

    }
    // ! Brute Force Approach [O(n^2)]
    /*
        ?   for (ll i = 0; i < n; i++) {
        ?      for (ll j = i + 1; j < n; j++) {
        *       // checking the condition (given in line 7)
        ?       if (a[j] - a[i] == j - i)
        ?           count++;
        ?     }
        ?   }
    */

    cout << count << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll testCase;
    cin >> testCase;

    while (testCase--) {
        solve();
    }
    return 0;
}
