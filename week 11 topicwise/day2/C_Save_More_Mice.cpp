// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2025.01.24
// Time:   02:20:36
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
    int e, n;
    cin >> e >> n;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    sort(ar.begin(), ar.end(), greater<int>());
    int st = 0, en = n - 1;
    auto ok = [&](int mid)
    {
        int cn = 0;

        for (int i = 0; i <= mid; i++)
        {
            cn += e - ar[i];
        }
        return cn <= (e - 1);
    };
    int res = 0;
    while (st <= en)
    {
        int mid = (st + en) / 2;
        if (ok(mid))
        {
            res = mid;
            st = mid + 1;
        }
        else
            en = mid - 1;
    }
    cout << res + 1 << endl;
}