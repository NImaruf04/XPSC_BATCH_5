// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2025.01.23
// Time:   20:10:00
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
    int n, e;
    cin >> n >> e;
    int num = e + n - 1;

    int sum = n * (2 * e + n - 1) / 2;
    int st = 1, en = n;
    int res = 1e18;
    while (st <= en)
    {
        int mid = (st + en) / 2;

        int sum1 = (mid) * ((2 * e) + (mid - 1)) / 2;
        int sum2 = sum - sum1;
        if (abs(sum1 - sum2) < res)
            res = abs(sum1 - sum2);
        if (sum1 < sum2)
        {
            st = mid + 1;
        }
        else
            en = mid - 1;
    }
    cout << res << endl;
}