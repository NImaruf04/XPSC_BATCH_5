// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
 
// Date:   2025.01.17
// Time:   00:37:15
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
    int n,e;
    cin>>n>>e;
    int ar[n+1];
    for(int i=1;i<=n;i++)cin>>ar[i];
    
    
    auto ok=[&](int sec){
       int cnt=0;
       for(int i=1;i<=n;i++){
        cnt+=(sec/ar[i]);
       }
       return cnt>=e;
    };
    int l=0,r=(ar[n]*e),mid,res;
    while(l<=r){
       mid=l+(r-l)/2;
       if(ok(mid)){
        res=mid;
        r=mid-1;
       }
       else l=mid+1;
    }
    cout<<res<<endl;
 
}
