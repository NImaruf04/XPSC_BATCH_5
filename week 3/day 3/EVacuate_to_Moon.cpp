// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
 
// Date:   2024.11.12
// Time:   22:38:51
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
    int n,a,b;
    cin>>n>>a>>b;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    vector<int>car(a);
    for(int j=0;j<a;j++ )cin>>car[j];
    sort(v.begin(),v.end(),greater<int>());
    sort(car.begin(),car.end(),greater<int>());
    int res=0;
    for(int i=0;i<min(n,a);i++){
       int x=(car[i]*b);
       res+=min(x,v[i]);
    }
    cout<<res<<endl;
}