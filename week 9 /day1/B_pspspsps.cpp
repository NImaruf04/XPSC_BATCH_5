// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.12.21
// Time:   08:51:58
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
    string s;
    cin >> s;
    bool tr = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n ; j++)
        {
            if (i > 0 && s[i] == 's' && j < n - 1 && s[j] == 'p')
            {
                tr = 1;
                break;
            }
            else if (s[i] == 'p' && s[j] == 's')
            {
                tr = 1;
                break;
            }
        }
    }
    if (tr)
        cno;
    else
        cyes;
}