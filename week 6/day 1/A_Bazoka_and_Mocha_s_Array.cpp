// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.12.07
// Time:   12:54:24
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
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    if (n < 3)
        cyes;
    else
    {
        int i = 1;
        while (i < n && ar[i] >= ar[i - 1])
            i++;
        if (i == n)
            cyes;
        else
        {
            if (ar[i] <= ar[0])
            {
                bool tr = 0;
                for (int x = i + 1; x < n; x++)
                {
                    if (ar[x] >= ar[x - 1] && ar[x] <= ar[0])
                        continue;
                    else
                    {
                        tr = 1;
                        break;
                    }
                }
                if (tr)
                    cno;
                else
                    cyes;
            }
            else
            {
                cno;
            }
        }
    }
}