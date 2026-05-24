#include <iostream>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

// ? options                          
// * 1. move right (x ➡️), move up (y⬆️) both increases by +1
// * 2. move left (⬅️ x) decreases by -1

void solve() {
    int source_x_axis{}, source_y_axis{}, destination_x_axis{}, destination_y_axis{};
    std::cin >> source_x_axis >> source_y_axis >> destination_x_axis >> destination_y_axis;

    // ? because moving down is not allowed (y ⬇️)
    if (source_y_axis > destination_y_axis) {
        std::cout << -1 << endl;
        return;
    }
    // ? the moves need to reach the destination y-axis point
    int moves = destination_y_axis - source_y_axis;
    // ? the moves need to reach the destination y-axis point
    source_x_axis += moves;

    // ? if destination x-axis point increases, so does the y-axis, so it is not possible (option 1)
    if (source_x_axis < destination_x_axis) {
        std::cout << -1 << endl;
        return;
    }
    // ? if the x-axis is on the left side, it can move to the left (option2)
    moves += (source_x_axis - destination_x_axis);
    std::cout << moves << endl;
}

int main() {
    fastIO();
    int tt{};
    std::cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
