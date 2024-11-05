// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
using namespace std; 
#define int long long
#define float double
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
    map<char,int>m;
        int a,b;
        cin>>a>>b;
        if(b>=a){cout<<"YES"<<endl;}
        else {
        for(int i=0;i<a;i++){
          char s;
          cin>>s;
          m[s]++;
         
        }
        int sum=0;
       for(auto x:m){
        if(x.second%2!=0){
            sum++;
        }
       }
       if(sum>b+1){cout<<"NO"<<endl;}
       else {cout<<"YES"<<endl;}
        
    }
}