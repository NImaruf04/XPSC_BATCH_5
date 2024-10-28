#include<bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

int32_t main () 
{
    int n;cin>>n;
    vector<int>odd;
    int jor=0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x%2==0){
           jor+=x;
        }
        else odd.push_back(x);
    }
    sort(odd.begin(),odd.end());
    for(int i=odd.size()-1;i>0;i-=2){
        
        jor+=odd[i];jor+=odd[i-1];
        
    }
    cout<<jor<<endl;



    return 0;
}