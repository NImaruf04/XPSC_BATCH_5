// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
 
// Date:   2024.11.19
// Time:   08:42:23
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
    int n,e;
    cin>>n>>e;
    string s;
    cin>>s;
    int st=0,en=0, cnt=0,res=0;
    while(en<n){
        if(s[en]=='B')cnt++;
        if(en-st+1==e){
            res=max(res,cnt);
            if(s[st]=='B'){cnt--;}
            st++;en++;
        }
        else en++;
        
    } 
    // cout<<res<<endl;
    cout<<e-res<<endl;
}