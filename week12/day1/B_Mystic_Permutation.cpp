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
        vector<int>x;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(n==1){cout<<-1<<endl;}
        else{
        
        
        x=v;
        sort(v.begin(),v.end());
        
        for(int i=0;i<n;i++){
            if(v[i]==x[i]){
                if(i+1!=n){
                    swap(v[i],v[i+1]);
                }
                else{
                    swap(v[i],v[i-1]);
                }
            }
        }
        for(auto p:v){
            cout<<p<<" ";
        }
        cout<<endl;
        }
    }
    return 0;
}