// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
 
// Date:   2024.12.15
// Time:   06:21:35
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
    int a,b,c;
    cin>>a>>b>>c;
    vector<int>v(b+1);
    for(int i=0;i<=b;i++){
        cin>>v[i];
        
    }
    int ar[b];
    
    
    memset(ar,0,sizeof(ar));
    for(int i=0;i<b;i++){
        int x=max(__lg(v[i]),__lg(v[b]));
      
        for(int j=0;j<=x;j++){
            if(((v[i]>>j)&1)&&((v[b]>>j)&1))continue;
            else if(!((v[i]>>j)&1)&&!((v[b]>>j)&1))continue;
            else ar[i]++;
        }
       
    }
    int res=0;
    for(int i=0;i<b;i++){if(ar[i]<=c)res++;}
    cout<<res<<endl;
}