#include<bits/stdc++.h>
using namespace std;


//my code 
/*int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int> arr(n);
        vector<int> countA(x+1,-1);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            countA[arr[i]]=1;
        }
        int l=0;
        int r=0;
        int maxi=INT_MIN;
        while(r<(x+1))
        {
            if(countA[r]==-1 && r!=x)
            {
                r++;
            }
            else if(countA[r]==1)
            {
                maxi=max(maxi,(r-l));
                l=r;
                r++;
            }
            else if(r==x)
            {
                    maxi=max(maxi,2*(r-l));
                    break;
            }
            
        }
        cout<<maxi<<endl;

    }
    return 0;
}*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int maxi = a[0];   // distance from 0 to first point

        for (int i = 1; i < n; i++) {
            maxi = max(maxi, a[i] - a[i - 1]);
        }

        // last gap counted twice
        maxi = max(maxi, 2 * (x - a[n - 1]));

        cout << maxi << "\n";
    }
    return 0;
}
