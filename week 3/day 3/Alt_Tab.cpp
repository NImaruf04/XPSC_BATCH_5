// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
 
// Date:   2024.11.12
// Time:   21:09:01
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float double
#define cyes cout<<"YES"<<endl
#define cno cout<<"NO"<<endl
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
    map<string,bool>m;
    vector<string>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    for(int i=n-1;i>=0;i--){
        if(!m[v[i]]){
            m[v[i]]=1;
            string s=v[i];
            cout<<s[s.size()-2]<<s[s.size()-1];
        }
    }
  cout<<endl;
    
}