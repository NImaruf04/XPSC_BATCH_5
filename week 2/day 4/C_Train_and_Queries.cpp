// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float double
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

    map<int, pair<int, int>> m;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (m[x].first == 0)
        {
            m[x].first = i;
        }
        else
        {
            m[x].second = i;
        }
    }
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int r1, r2;
        if (m[a].first > 0)
        {
            r1 = m[a].first;
        }
        else
            r1 = -1;
        if (m[b].second > 0)
        {
            r2 = m[b].second;
        }
        else if (m[b].first > 0)
        {
            r2 = m[b].first;
        }
        else
            r2 = -1;
        if (r1 != -1 && r2 != -1 && r1 <= r2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}