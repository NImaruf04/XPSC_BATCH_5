// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
 
// Date:   2024.11.15
// Time:   12:03:44
#include <bits/stdc++.h>
using namespace std; 
#define int long long
#define float double
#define ccase cout<<"Case"<<" "<<T<<" "<<':'<<" "
#define cyes cout<<"YES"<<endl
#define cno cout<<"NO"<<endl
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
    int n,m;
    cin>>n>>m;
    string s,ss; cin>>s;
    set<int>st;

    
    for(int i=0;i<m;i++){int x;cin>>x;
    st.insert(x);}
    cin>>ss;
    sort(ss.begin(),ss.end());
   //cout<<ss<<endl;
   int sa=0;
   for(auto xx:st){
     s[xx-1]=ss[sa];
     sa++;
   }
   cout<<s<<endl;
    

}