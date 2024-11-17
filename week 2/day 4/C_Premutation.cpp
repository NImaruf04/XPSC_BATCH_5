// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
 
// Date:   2024.11.16
// Time:   08:00:56
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
    int n;
    cin>>n;
    map<int,bool>m;
    int ar[n+1];
    for(int j=1;j<=n;j++){
    for(int i=1;i<n;i++){
        
       int x;
       cin>>x;
       if(j==1){ar[i]=x;m[x]=1;}
       
    }}
    for(int i=1;i<=n;i++){
        if(!m[i]){ar[n]=i;break;}
    }
    for(int i=1;i<=n;i++)cout<<ar[i]<<" ";
    cout<<endl;
    
}