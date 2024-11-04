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
    int n;cin>>n;
    map<string,bool>m;
    vector<string>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    
    }
    for(int i=n-1;i>=0;i--){
        if(m[v[i]]==0)cout<<v[i]<<endl;
        m[v[i]]=1;
    }

}