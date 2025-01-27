// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2025.01.25
// Time:   02:03:33
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

    int st = 1, en = 2e9;
    int res;
    while (st <= en)
    {
        int mid = (st + en) / 2;
        int x = mid * (mid - 1) / 2;
        if (x == n)
        {
            res = mid;
            break;
        }
        else if (x < n)
        {
            res = mid;
            st = mid + 1;
        }
        else
            en = mid - 1;
    }
    int r = (res * (res - 1)) / 2;
    if (r == n)
        cout << res << endl;
    else
        cout << res + (n - r) << endl;
}