// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
 
// Date:   2025.01.03
// Time:   13:04:05
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
    for(int i=0;i<n;i++)cin>>ar[i];
    for(int i=0;i<n;i++)cin>>br[i];
    priority_queue<int>besi;
    priority_queue<int>kom;
    for(int i=0;i<n;i++){
        if(br[i]>=ar[i]){besi.push(br[i]-ar[i]);}
        else {
            kom.push(ar[i]-br[i]);
        }
    }
    int res=0;
    while(!besi.empty()){
       while(!kom.empty()&&kom.top()>besi.top()){
           kom.pop();
       }
       if(!kom.empty()){
          res++;
          besi.pop();
          kom.pop();
       }
       else if(besi.size()>1){
        res++;
        besi.pop();
        besi.pop();
       }
       else{break;}
       
    }
    cout<<res<<endl;
}