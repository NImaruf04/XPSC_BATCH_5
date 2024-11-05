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
    string s,e;
    cin>>s>>e;
    int res=0;
    for(int i=0;i<max(s.size(),e.size());i++){
        if(s[i]!=e[i])res++;
    }
    cout<<res<<endl;
}