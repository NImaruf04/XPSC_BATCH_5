// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
 
// Date:   2024.11.11
// Time:   21:07:06
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
    int n,k,l;
    cin>>n>>k>>l;
    vector<int>v;

    while(n--){
        int x,y;
        cin>>x>>y;
        if(y==l){v.push_back(x);}
    }
    sort(v.begin(),v.end(),greater<int>());
    int res=0,cnt=0;
    for(int i=0;i<v.size();i++){
        if(cnt==k)break;
        res+=v[i];
        cnt++;
    }
    if(cnt==k)cout<<res<<endl;
    else cout<<-1<<endl;
}