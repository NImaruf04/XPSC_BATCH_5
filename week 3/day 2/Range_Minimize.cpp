// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
 
// Date:   2024.11.11
// Time:   13:16:32
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
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    
    if(n<=3)cout<<0<<endl;
    else{
        vector<int>res;
        res.push_back({v[v.size()-1]-v[0]});
        res.push_back({v[v.size()-2]-v[0]});
        res.push_back({v[v.size()-3]-v[0]});
        res.push_back({v[v.size()-2]-v[1]});
        res.push_back({v[v.size()-1]-v[1]});
        res.push_back({v[v.size()-1]-v[2]});
        
        sort(res.begin(),res.end());
        cout<<res.front()<<endl;

        
    }
}