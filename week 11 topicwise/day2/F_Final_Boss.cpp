// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2025.01.25
// Time:   00:20:20
#include <bits/stdc++.h>
using namespace std;
#define int  unsigned long long
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
    int n, e;
    cin >> e >> n;
    int ar[n], br[n];
    int tl = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        tl += ar[i];
    }
    for (int j = 0; j < n; j++)
        cin >> br[j];
    if (tl >= e)
        cout << 1 << endl;
    else
    {
        e -= tl;
        auto ok = [&](int mid)
        {
            int res = 0;
            for (int i = 0; i < n; i++)
            {
                int x = mid / br[i];
                res += (x * ar[i]);
            }
            return res >= e;
        };
        int st = 0, en = 1e18;
        int ans;
        while (st <= en)
        {
            int mid = (st + en) / 2;
            if (ok(mid))
            {
                ans = mid;
                en = mid - 1;
            }
            else
                st = mid + 1;
        }
        cout << ans + 1 << endl;
    }
}