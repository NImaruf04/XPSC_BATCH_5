// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.12.23
// Time:   07:43:42
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
    int ch = ar[0];
    bool fr = 0;
    for (int i = 1; i < n; i++)
    {
        if (!tr)
        {
            if (ar[i] >= ar[i - 1])
                continue;
            else
            {
                tr = 1;
                if (ar[i] > ch)
                {
                    fr = 1;
                    break;
                }
            }
        }
        else
        {
            if (ar[i] >= ar[i - 1] && ar[i] <= ch)
            {
                continue;
            }
            else
            {
                fr = 1;
                break;
            }
        }
    }
    if (fr)
        cno;
    else
        cyes;
}