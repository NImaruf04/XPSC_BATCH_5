// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
 
// Date:   2025.01.28
// Time:   16:52:06
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
    int ar[n+1];
    for(int i=0;i<=n;i++)ar[i]=-1;
    ar[a]=0;
    ar[b]=1;
    for(int i=1;i<=n;i++){
       if(ar[i]!=-1)continue;
       if(i==1){
          map<int,int>m;
          m[ar[n]]++;
          m[ar[i+1]]++;
          for(int j=0;j<3;j++){
            if(m[j]==0){ar[i]=j;break;}
          }
       }
       else if(i==n){
          map<int,int>m;
          m[ar[1]]++;
          m[ar[n-1]]++;
          for(int j=0;j<3;j++){
            if(m[j]==0){ar[i]=j;break;}
          }
       }
       else {
          map<int,int>m;
          m[ar[i-1]]++;
          m[ar[i+1]]++;
          for(int j=0;j<3;j++){
            if(m[j]==0){ar[i]=j;break;}
          }
       }
    }
    for(int i=1;i<=n;i++)cout<<ar[i]<<" ";
    cout<<endl;
}