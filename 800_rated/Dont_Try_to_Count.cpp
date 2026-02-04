#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;

    for (int i = 0; i <= 5; i++) {
        // Check if s is a substring of x
        //why till 5 because everytime it become double and the maimum string possibly is 25 so our at 6th iteration it will become 32
        if (x.find(s) != string::npos) {
            cout << i << endl;
            return;
        }
        // Double the string x
        x += x;
    }

    // If not found after 6 doublings, it's impossible

    cout << -1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}