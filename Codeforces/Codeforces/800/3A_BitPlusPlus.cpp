// Codeforces 3A - Bit++
// Difficulty: 800 (Easy)
// Topic: Strings / Implementation

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int x = 0;

    while (n--) {
        string s;
        cin >> s;

        // Check increment or decrement
        if (s[1] == '+') {
            x++;  // X++ or ++X
        } else {
            x--;  // X-- or --X
        }
    }

    cout << x << endl;

    return 0;
}
