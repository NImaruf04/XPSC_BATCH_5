// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.12.25
// Time:   12:51:54
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
    if (ar[n - 1] == 1)
        cno;
    else
    {
        cyes;
        int en = n - 1;
        while (en >= 0)
        {
            if (en - 1 >= 0 && ar[en - 1] == 1)
            {
                int cnt = 0;
                en--;
                while (en >= 0)
                {
                    if (ar[en] == 0)
                        break;
                    cout << 0 << " ";
                    cnt++;
                    en--;
                }
                cout << cnt << " ";
            }
            else
            {
                cout << 0 << " ";
                en--;
            }
        }
        cout << endl;
    }
}