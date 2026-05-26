#include <iostream>
#include <vector>
#include <set>
#define endl '\n'

void fastIO() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
}

void solve() {
    int knight_x{}, knight_y{};
    int king_x{}, king_y{};
    int queen_x{}, queen_y{};

    std::cin >> knight_x >> knight_y;
    std::cin >> king_x >> king_y;
    std::cin >> queen_x >> queen_y;


/*
! coordinate chart
                       +y
                        ^
       dx[1],dy[1]      |      dx[0],dy[0]
       (-x,+y) Q2       |      (+x,+y) Q1
                        |
                        |
-x ---------------------+---------------------> +x
                        |
       dx[2],dy[2]      |      dx[3],dy[3]
       (-x,-y) Q3       |      (+x,-y) Q4
                        |
                        v
                       -y
*/
    std::vector<int> dx{1, -1, -1, 1}, dy{1, 1, -1, -1}; // ? 4 coordinates
    std::set<std::pair<int, int>> king, queen;
    for (int i{}; i < 4; i++) {
        // ? dx/dy controls quadrant signs: (+,+), (-,+), (-,-), (+,-)
        // ? Generate knight attack positions using (±a, ±b)
        king.insert({king_x + (dx[i] * knight_x), king_y + (dy[i] * knight_y)});
        queen.insert({queen_x + (dx[i] * knight_x), queen_y + (dy[i] * knight_y)});
        
        // ? Generate knight attack positions using swapped move (±b, ±a)
        king.insert({king_x + (dx[i] * knight_y), king_y + (dy[i] * knight_x)});
        queen.insert({queen_x + (dx[i] * knight_y), queen_y + (dy[i] * knight_x)});
    }
    int answer{};
    for (auto position : king) {
        if (queen.find(position) != queen.end())
            answer++;
    }
    std::cout << answer << endl;
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
