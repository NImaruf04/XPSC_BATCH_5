// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.12.08
// Time:   17:52:21
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float double
#define cyes cout << "YES" << endl
#define cno cout << "NO" << endl
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
    int n;
    cin >> n;
    int ar[n];
    bool tr=0;
    for(int i=0;i<n;i++)cin>>ar[i];
    for(int i=0;i<(1<<n);i++){
        int tot=0;
        for(int k=0;k<n;k++){
            if(i&(1<<k))tot+=ar[k];
            else tot-=ar[k];
        }
        if(tot%360==0||tot==0){tr=1;break;}
    }
    if(tr)cyes;
    else cno;

 
    
}