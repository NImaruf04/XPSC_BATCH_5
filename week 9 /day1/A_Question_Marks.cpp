// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2025.01.03
// Time:   22:01:44
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
    int cna = 0, cnb = 0, cnc = 0, cnd = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A')
            cna++;
        else if (s[i] == 'B')
            cnb++;
        else if (s[i] == 'C')
            cnc++;
        else if (s[i] == 'D')
            cnd++;
    }
    int res = 0;
    res += min(n, cna);
    res += min(n, cnb);
    res += min(n, cnc);
    res += min(n, cnd);
    cout << res << endl;
}