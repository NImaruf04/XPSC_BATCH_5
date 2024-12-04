#include<bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main () 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--) 
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        int x=v[n-2];
        for(int i=0;i<n-2;i++){
            x-=v[i];
        }
        cout<<v[n-1]-x<<endl;
    }
    return 0;
}