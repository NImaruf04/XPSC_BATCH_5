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
    int n,e;
    cin>>n>>e;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x!=e)v.push_back(x);
    }
    for(auto tl:v)cout<<tl<<" ";
    cout<<endl;
}