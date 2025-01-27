// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2025.01.24
// Time:   01:36:16
#include <bits/stdc++.h>
using namespace std;
#define int unsigned long long
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
    cin >> n >> e;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
        cin >> ar[i];
   
    int st = 0, en = 2e9;
    auto ok = [&](int mid)
    {
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] <= mid)
            {
                res += mid - ar[i];
            }
        }
        return res <= e;
    };
    int cn = 0;
    while (st <= en)
    {
        int mid = (en + st) / 2;
        if (ok(mid))
        {
            cn = mid;
            st = mid + 1;
        }
        else
            en = mid - 1;
    }
    cout << cn << endl;
}