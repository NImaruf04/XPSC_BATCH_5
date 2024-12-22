// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.12.22
// Time:   18:09:30
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
    vector<int> v1;
    vector<int> v2;
    bool tr = 0,fr=0;
    int pos = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v2.push_back(v[i]);
        if(v[i]==0&&!tr){
            tr=1;
            v1.push_back(1);
        }
        else v1.push_back(v[i]);
      
        
        
            
        
    }
    
    for(int i=n-1;i>=0;i--){
        if(v2[i]==1){
            v2[i]=0;
            break;
        }
    }
   
    int res=0,cnt=0,tmp=0;
    for(int i=n-1;i>=0;i--){
         if(v[i]==0)cnt++;
         else tmp+=cnt;
         
    }
    
    cnt=0;res=max(res,tmp);tmp=0;
    for(int i=n-1;i>=0;i--){
        if(v1[i]==0)cnt++;
        else tmp+=cnt;
        
    }
    
    cnt=0;res=max(res,tmp);tmp=0;
    for(int i=n-1;i>=0;i--){
        if(v2[i]==0)cnt++;
        else tmp+=cnt;
    }
    cnt=0;res=max(res,tmp);tmp=0;
    cout<<res<<endl;
    

    
}