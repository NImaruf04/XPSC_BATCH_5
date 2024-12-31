// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
 
// Date:   2024.12.30
// Time:   22:25:03
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
    int ar[n],br[n];
    for(int i=0;i<n;i++)cin>>ar[i];\
    for(int i=0;i<n;i++)cin>>br[i];
    int pr[n];
    int su[n];
    pr[0]=br[0];
    for(int i=1;i<n;i++){pr[i]=pr[i-1]+br[i];}
    
    
    su[n-1]=br[n-1];
    for(int i=n-2;i>=0;i--){
        su[i]=su[i+1]+br[i];
    }
    bool tr=0;
    for(int i=0;i<n;i++){
         if(su[i]<ar[i]&&pr[i]<ar[i]){tr=1;break;}
    }
    if(tr)cno;
    else cyes;

}