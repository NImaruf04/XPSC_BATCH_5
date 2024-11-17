// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.11.13
// Time:   07:11:32
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float double
#define ccase cout << "Case" << " " << T << " " << ':' << " "
#define cyes cout << "YES" << endl
#define cno cout << "NO" << endl
#define endl '\n'
#define NI                       \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);

#define MARUF  \
    int TC;    \
    cin >> TC; \
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
    int n, a, b;
    cin >> n >> a >> b;
    vector<int>te(a);
    
    for(int i=0;i<a;i++)cin>>te[i];
    sort(te.begin(),te.end());
    while(b--){
        int x;cin>>x;
        if(x<te[0]){cout<<te[0]-1<<endl;}
        else if(x>te[a-1])cout<<n-te[a-1]<<endl;
        else {
            auto it=lower_bound(te.begin(),te.end(),x);
            auto ft=it;
            ft--;
            int mid=(*it+*ft)/2;
          // cout<<*ft<<" "<<*it<<endl;
            int res= min(abs(mid-*ft),abs(mid-*it));
            cout<<res<<endl;
        }
    }
}