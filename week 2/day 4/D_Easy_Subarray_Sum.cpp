// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.11.11
// Time:   21:16:05
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float double
#define ccase cout << "Case" << " " << T << " " << ':' << " "
#define cyes cout << "YES" << endl
#define cno cout << "NO" << endl
#define endl '\n'
#define NI                       \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);

#define MARUF  \
    int TC;    \
    cin >> TC; \
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
    cin >> n;
    vector<int> v(n);
    
    int cnt = 0;
    
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        
        if (v[i] <= 0)
            cnt++;
    }
    if (cnt == n)
        cout << 0 << endl;
    else
       { 
          int fi=n,ni=-1;
          
          for(int i=0;i<n;i++){
             if(v[i]>0){fi=i;break;}
            
          }
          
          for(int i=n-1;i>=0;i--){
             if(v[i]>0){ni=i;break;}
          }
          int res=0;
          for(int i=fi+1;i<ni;i++){
              if(v[i]<0)res++;
          }
        cout<<res<<endl;
       }
}