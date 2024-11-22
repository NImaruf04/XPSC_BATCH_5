// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
 
// Date:   2024.11.22
// Time:   23:02:39
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
    string s;
    cin>>s;
    char st=min(s[0],s[s.size()-1]);
    char en=max(s[0],s[s.size()-1]);
    
    int x=en-st,cnt=0;
    
    vector<pair<char,int>>p;
    for(int i=1;i<s.size()-1;i++){
        if(s[i]>=st&&s[i]<=en)p.push_back({s[i],i+1});
    }
    sort(p.begin(),p.end(),[&](pair<char,int>p1,pair<char,int>p2){
           if(p1.first==p2.first){
            if(p1.second<p2.second)return false;
            else return true;
           }
           else{
             if(st==s[0]){
                 if(p1.first<p2.first)return true;
                 else return false;
             }
             else {
                 if(p1.first<p2.first)return false;
                 else return true;
             }
           }
    });
    cout<<x<<" "<<p.size()+2<<endl;
    cout<<1<<" ";
    for(auto xx:p){
        cout<<xx.second<<" ";
    }
    cout<<s.size()<<endl;
}