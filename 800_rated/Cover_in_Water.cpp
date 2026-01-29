#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int total_dots = 0;
    bool three_in_a_row = false;

    for (int i = 0; i < n; i++) {
        if (s[i] == '.') {
            total_dots++;
        }
        // Check if there are three consecutive dots
        if (i > 0 && i < n - 1) {
            if (s[i-1] == '.' && s[i] == '.' && s[i+1] == '.') {
                three_in_a_row = true;
            }
        }
    }

    if (three_in_a_row) {
        cout << 2 << endl;
    } else {
        cout << total_dots << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}