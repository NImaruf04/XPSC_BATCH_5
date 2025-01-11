// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2025.01.11
// Time:   10:14:52
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
    bool tr = 0;
    int tm = ar[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (ar[i] <= tm)
        {
            tm = ar[i];
            continue;
        }
        else if (ar[i] > tm && ar[i] > 9)
        {

            while (ar[i] > 0)
            {

                if (ar[i] % 10 <= tm)
                {
                    tm = ar[i] % 10;
                }
                else
                {
                    tr = 1;
                    break;
                }
                ar[i] /= 10;
            }
        }
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