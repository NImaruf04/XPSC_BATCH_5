// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2025.01.07
// Time:   11:10:05
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
    int x = 0;

    int cnt = 1;
    bool tr = 1;
    int sn = 0;
    while ((x + ((n + 1) / 2)) < e)
    {
        x += ((n + 1) / 2);
        n = n / 2;
        sn = x;
        cnt++;
    }
    cout << ((1 << cnt) / 2) + (((e - sn) - 1) * (1 << cnt)) << endl;
}