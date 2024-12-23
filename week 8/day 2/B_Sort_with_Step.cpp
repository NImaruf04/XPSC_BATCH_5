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
         vector<pair<int,int>>p;
        for(int i=0;i<a;i++){
            int k;
            cin>>k;
            p.push_back({i,k});
        }
        sort(p.begin(),p.end(),cmp);
        // for(auto kk:p){
        //     cout<<kk.first<<" "<<kk.second<<endl;
        // }
        int count=0;
        for(int i=0;i<a;i++){
            if(abs(p[i].first-i)%b==0)count++;
        }
        //cout<<count<<endl;
        if(count==a)cout<<0<<endl;
        else if(count==a-2)cout<<1<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}