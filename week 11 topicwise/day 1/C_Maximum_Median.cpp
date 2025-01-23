// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
 
// Date:   2025.01.19
// Time:   18:51:09
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float double
#define cyes cout<<"YES"<<endl
#define cno cout<<"NO"<<endl
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
     int n, e;
    cin >> n >> e;
    
    int ar[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> ar[i];

    sort(ar + 1, ar + n + 1);
    auto ok = [&](int val)
    {
        int cnt = 0;
        for (int i = (n / 2) + 1; i <= n; i++)
        { 
            if(ar[i]>=val)break;
            cnt += (val - ar[i]);
        }
        return cnt<=e;
    };
   int st = 0, en = 2 * (1e9);
   int res=0;
    while(st<=en){
        int mid=st+((en-st)/2);
        if(ok(mid)){
            res=mid;
            st=mid+1;
        }
        else {
            en=mid-1;
        }
    }
    cout<<res<<endl;
}