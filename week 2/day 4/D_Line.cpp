// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
 
// Date:   2024.11.16
// Time:   06:47:28
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
    string s;
    cin>>s;
    int res=0;
    int ar[n];
    for(int i=0;i<n;i++){
        if(s[i]=='L'){res+=i;ar[i]=i;}
        else{ar[i]=n-(i+1); res+=(n-(i+1));}
    }
    
    queue<int>v;
    for(int i=0;i<n/2;i++){
        if(s[i]=='L'){
            v.push(n-(i+1)-ar[i]);

        }
    }
    queue<int>x;
    for(int i=n-1;i>=(n/2);i--){
        if(s[i]=='R'){
            x.push(i-ar[i]);
        }
    }
   
    for(int i=0;i<n;i++){
       if(v.empty()&&x.empty())cout<<res<<" ";
       else if(v.empty()){
        res+=x.front();
        x.pop();
        cout<<res<<" ";
       }
       else if(x.empty()){
          res+=v.front();
          v.pop();
          cout<<res<<" ";
       }
       else {
        if(v.front()>=x.front()){
            res+=v.front();
            v.pop();
            cout<<res<<" ";
        }
        else{
            res+=x.front();
            x.pop();
            cout<<res<<" ";
        }
       }
       
    }
    cout<<endl;
    //for(auto xx:v)cout<<xx<<" ";
}