// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float double
#define endl '\n'
#define NI                       \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);              \
    void solve();
int32_t main()
{
    NI
    solve();
    return 0;
}
void solve()
{
    int n, e;
    cin >> n >> e;
    int ar[n+1];
    for(int i=1;i<=n;i++)cin>>ar[i];
    map<int,int>m;
    vector<int>x(n+1);
    for(int i=n;i>0;i--){
         m[ar[i]]++;
         x[i]=m.size();
    }
    for(int i=0;i<e;i++){
        int kk;cin>>kk;
        cout<<x[kk]<<endl;
    }
}