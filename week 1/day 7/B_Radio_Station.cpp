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
    void solve();
int32_t main()
{
    NI
    solve();
    return 0;
}
void solve()
{
    int n,e;cin>>n>>e;
    vector<pair<string,string>>v(n);
    for(int i=0;i<n;i++){
        string x,y;
        cin>>x>>y;
        v[i]={x,y};
    }
    for(int i=0;i<e;i++){
        string s1,s2;
        cin>>s1>>s2;
        string temp=s2;
        temp.resize(s2.size()-1);
       // cout<<temp<<endl;
        for(int i=0;i<n;i++){
            if(v[i].second==temp){cout<<s1<<" "<<s2<<" "<<'#'<<v[i].first<<endl;break;}
        }
    }
}