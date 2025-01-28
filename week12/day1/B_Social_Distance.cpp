// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2025.01.26
// Time:   16:18:19
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
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    sort(ar, ar + n);
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            res += (ar[i] * 2 + 1);
        else if (i == n - 1)
        {
            res += ar[i] - ar[i - 1] + 1;
            res += ar[i] - ar[0];
        }
        else
        {
            int x = ar[i] - ar[i - 1];
            res += ar[i] + 1 + x;
        }
    }
    if (res <= e)
        cyes;
    else
        cno;
}