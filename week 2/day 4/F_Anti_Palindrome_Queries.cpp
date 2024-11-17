// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.11.11
// Time:   22:19:37
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
    int ar[n+1];
    for (int i = 1; i <= n; i++)
        cin >> ar[i];
    for (int j = 0; j < e; j++)
    {
        int x, y;
        cin >> x >> y;
        if ((y - x) > 4)
            cout << "NO" << endl;
        else
        {
            map<int, int> m;
            for (int i = x; i <= y; i++)
                m[ar[i]]++;
            int cn = 0;
            if ((y - x) == 1)
                cout << "YES" << endl;
            else if ((y - x) == 2)
            {
                if (ar[y] != ar[x])
                    cyes;
                else
                    cno;
            }
            else
            {

                if (m.size() < 3)
                    cno;
                else
                    cyes;
            }
        }
    }
}