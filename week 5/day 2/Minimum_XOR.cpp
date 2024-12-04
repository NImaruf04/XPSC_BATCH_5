// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.12.02
// Time:   18:07:57
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
    int res = 0;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        res = res ^ ar[i];
    }
    int rr = res;
    for (int i = 0; i < n; i++)
    {
        res = res ^ ar[i];
        rr = min(rr, res);
        res = res ^ ar[i];
    }
    cout << rr << endl;
}