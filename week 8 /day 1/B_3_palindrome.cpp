// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
 
// Date:   2024.12.22
// Time:   01:13:31
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
    int n;cin>>n;
    string s1="aa";
    string s2="bb";
    int x=n/2;
    for(int i=0;i<x;i++){
        if(i%2==0)cout<<s2;
        else cout<<s1;
    }
    if(n%2!=0){
        if(x%2!=0)cout<<'a'<<endl;
        else cout<<'b'<<endl;
    }
}