// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.12.11
// Time:   23:40:56
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
    vector<int> bit(31);
    vector<int> ar(n);
    for (int i = 0; i < n; i++)cin>>ar[i];
       
    for (int i = 0; i < n; i++)
    {
        for (int j = 30; j >= 0; j--)
        {
            if ((ar[i] >> j) & 1)
                bit[j]++;
        }
    }
    int res = 0;
    for (int i = 30; i >= 0; i--)
    {
        if (bit[i] == n)
            res += (1LL << i);
        else
        {
            if ((n - bit[i]) <= e)
            {
                res += (1 << i);
                e -= (n - bit[i]);
            }
        }
    }
    cout << res << endl;
}