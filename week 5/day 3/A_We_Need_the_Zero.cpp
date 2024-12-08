// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.12.05
// Time:   08:40:15
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
    int n;
    cin >> n;
    int ar[n + 1];
    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> ar[i];
        res^=ar[i];
    }

    for (int i = 1; i <= n; i++)
    {
        ar[i] = (ar[i] ^ res);
    }
    int cnt = 0;
    
    for (int i = 1; i <= n; i++)
        cnt=(cnt^ar[i]);
    if (cnt == 0)
        cout << res << endl;
    else
        cout << -1 << endl;
}