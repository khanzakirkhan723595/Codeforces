#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    map<int, int> freq;   // it keeps  in sorted order according to key
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }

    // If more than 2 distinct numbers, it's impossible
    if (freq.size() > 2) {
        cout << "NO" << endl;
    } 
    // If only 1 distinct number, it's always possible
    else if (freq.size() == 1) {
        cout << "YES" << endl;
    } 
    // If exactly 2 distinct numbers, check if their counts are balanced
    else {
        int count1 = freq.begin()->second;
        int count2 = freq.rbegin()->second;
        
        // The counts must be either (n/2, n/2) for even or (n/2, n/2 + 1) for odd
        if (abs(count1 - count2) <= 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}