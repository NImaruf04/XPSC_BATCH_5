// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
 
// Date:   2024.11.18
// Time:   12:33:42
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
    int n,m;
    cin>>n>>m;
    map<int,int>ab;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        ab[x]++;
    }
    int res=0;
    for(int i=0;i<m;i++){
        int f;cin>>f;
        res+=ab[f];
    }
    cout<<res<<endl;
}