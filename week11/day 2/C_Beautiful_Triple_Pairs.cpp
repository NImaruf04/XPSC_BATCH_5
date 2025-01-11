// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
 
// Date:   2025.01.11
// Time:   16:18:28
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
    int n;cin>>n;
    map<tuple<int,int,int>,int>m1,m2;
    int ar[n];
    for(int i=0;i<n;i++)cin>>ar[i];
    int res=0;
    for(int i=2;i<n;i++){
        res+=m1[{ar[i-2],ar[i-1],0}]-m2[{ar[i-2],ar[i-1],ar[i]}];
        res+=m1[{ar[i-2],0,ar[i]}]-m2[{ar[i-2],ar[i-1],ar[i]}];
        res+=m1[{0,ar[i-1],ar[i]}]-m2[{ar[i-2],ar[i-1],ar[i]}];
        m1[{ar[i-2],ar[i-1],0}]++;
        m1[{ar[i-2],0,ar[i]}]++;
        m1[{0,ar[i-1],ar[i]}]++;
        m2[{ar[i-2],ar[i-1],ar[i]}]++;

    }
    cout<<res<<endl;
}