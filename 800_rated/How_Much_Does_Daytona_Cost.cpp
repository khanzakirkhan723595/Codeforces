#include<bits/stdc++.h>
using namespace std;

/*int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        unordered_map<int,int> freq;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            freq[arr[i]]++;
        }

        if(freq[k]!=0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        else{
            cout<<"NO"<<endl;
            continue;
        }
    }
    return 0;
}*/





//method 2


void solve() {
    int n, k;
    cin >> n >> k;
    bool found = false;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == k) found = true; // Just check if k exists
    }
    
    if (found) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}