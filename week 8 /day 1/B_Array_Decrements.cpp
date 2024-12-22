// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.12.21
// Time:   18:51:50
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
    int ar1[n], ar2[n];
    for (int i = 0; i < n; i++)
        cin >> ar1[i];
    for (int i = 0; i < n; i++)
        cin >> ar2[i];

    bool tr = 0;
    int tm = -1;
    int forz = -1;
    for (int i = 0; i < n; i++)
    {
        if (ar2[i] == 0)
        {
            int x = ar1[i] - ar2[i];
            if (x > forz)
                forz = x;
        }
        else if(ar2[i]>ar1[i]){tr=1;break;}
        else
        {
            if (tm == -1)
            {
                tm = ar1[i] - ar2[i];
            }
            else
            {
                if (ar1[i] - ar2[i] != tm)
                {
                    tr = 1;
                    break;
                }
            }
        }
    }
    if (!tr)
    {
        if (tm == -1)
            cyes;
        else if (tm >= forz)
            cyes;
        else
            cno;
    }
    else
        cno;
}