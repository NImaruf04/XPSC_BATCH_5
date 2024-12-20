// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
 
// Date:   2024.12.17
// Time:   19:02:32
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
    string s;
    cin>>s;
    int l=s.size();
    int res=0;
    for(int i=0;i<l;i++){
        res+=(1<<i);
    }
    for(int i=0;i<l;i++){
        if(s[i]=='7')res+=(1<<(l-i-1));
    }
    cout<<res<<endl;
}