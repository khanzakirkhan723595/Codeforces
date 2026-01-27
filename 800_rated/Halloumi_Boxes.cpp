#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            
            cin>>arr[i];
            
        }
        bool isSorted=true;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]<=arr[i+1])
            {
                continue;
            }
            else{
                isSorted=false;
                break;
            }
        }

        if(isSorted==true)
        {
            cout<<"YES"<<endl;
        }
        else{
            if(k<=n && k>=2)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

        }
    }
    return 0;
}