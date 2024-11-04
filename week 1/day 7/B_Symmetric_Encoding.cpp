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
 
#define MARUF                  \
    int TC;                     \
    cin >> TC;                   \
    for (int T = 1; T <= TC; T++) 
void solve();
int32_t main()
{
    NI MARUF
    {
        solve();
    }
    return 0;
}
void solve()
{
    int n;cin>>n;
    string s;
    cin>>s;
    map<char,int>m;
    for(int i=0;i<n;i++){
      m[s[i]]++;
    }
    string gs;
    for(auto xx:m){
      gs.push_back(xx.first);
    }
   // cout<<gs<<endl;
    map<char,char>st;
    for(int i=0;i<=gs.size()/2;i++){
        st[gs[i]]=gs[gs.size()-1-i];
         st[gs[gs.size()-1-i]]=gs[i];
        // cout<<gs[i]<<" "<<gs[gs.size()-1-i]<<endl;
    }
    for(int i=0;i<n;i++){
       s[i]=st[s[i]];
    }
    cout<<s<<endl;


}