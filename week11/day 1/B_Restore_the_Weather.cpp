#include<bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;
bool cmp(const pair<int,int> a , const pair<int,int> b) {
    return a.second<b.second;
}

int32_t main () 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--) 
    {
        int a,b;
        cin>>a>>b;
        vector<int>v(a);
        vector<pair<int,int>>p;
        
        for(int i=0;i<a;i++){
            int k;
            cin>>k;
            p.push_back({i,k});
        }
        for(int i=0;i<a;i++)cin>>v[i];
        sort(v.begin(),v.end());
        sort(p.begin(),p.end(),cmp);
        
        
        vector<int>kk(a);
        for(int i=0;i<a;i++){
            kk[p[i].first]=v[i];
        }
        for(auto x:kk){
            cout<<x<<" ";
        }
        cout<<endl;
       
    }
    return 0;
}