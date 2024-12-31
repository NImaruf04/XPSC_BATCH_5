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
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            v.push_back(make_pair(i,k));
        }
        bool tr=0;
        for(int i=0;i<n;i++){
             int z=v[i].second;
             if((v[i].first+1)==v[z-1].second){tr=1;break;}
        
        }
        if(tr==1){cout<<2<<endl;}
        else if(n<3){cout<<n<<endl;}
        else {cout<<3<<endl;}
        
    }
    return 0;
}