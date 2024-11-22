// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
 
// Date:   2024.11.22
// Time:   18:19:27
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
    
    int m=(n*(n-1))/2;
    int inp[m];
    
    for(int i=0;i<m;i++)cin>>inp[i];
    sort(inp,inp+m);
    

    int x=n-1;
    int i=1;
    vector<int>v;
    while(x<=m){
       v.push_back(inp[x-1]);
       i++;
       if(n-i<1)break;
      x+=(n-i);
       
    }
    v.push_back(1e9);
     for(auto pr:v)cout<<pr<<" ";
    cout<<endl;
}