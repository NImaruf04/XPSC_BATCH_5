// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float double
#define endl '\n'
#define NI                       \
    ios::sync_with_stdio(false);  \
    cin.tie(NULL);                 \
    cout.tie(NULL);                 \
    void solve();
int32_t main()
{
    NI
    solve();
    return 0;
}
void solve()
{
    int n;cin>>n;
    vector<int>v(n);
    int ma=INT_MIN;
    map<int,int>m;
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        m[v[i]]++;
        
    }
    
  for(auto xt:m){
    if(xt.second>=cnt){cnt=xt.second;}
  }

 cout<<cnt<<endl;


   
}