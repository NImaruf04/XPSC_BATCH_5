// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
 
// Date:   2024.11.14
// Time:   23:49:51
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
  int ar[n];
  map<int,int>m;
   for(int i=0;i<n;i++){
    cin>>ar[i];
    m[ar[i]]++;
   }
   sort(ar,ar+n);
   int res=0;
   
   for(int i=0;i<n;i++){
    int val=ar[i];
      if(m[val]!=0){
        res++;
          while(m[val]!=0){
              m[val]--;
              val++;
          }   
      }
   
   }
   cout<<res<<endl;
}