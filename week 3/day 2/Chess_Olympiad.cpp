// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
 
// Date:   2024.11.11
// Time:   13:03:56
#include <bits/stdc++.h>
using namespace std;
#define int float
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
    int x=a+b+c;
    int  rr=(0.5*b);
    int xxx=a+rr;
    if(4-x>0)xxx+=(4-x);
    
    int xx=rr+c;
   // cout<<xxx<<" "<<xx<<endl;
    if(xxx>xx)cyes;
    else cno; 
}