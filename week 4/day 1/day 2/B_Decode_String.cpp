// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.11.21
// Time:   18:42:27
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
    string res;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '0' && i - 2 >= 0)
        {
            string cp;
            cp.push_back(s[i - 2]);
            cp.push_back(s[i - 1]);
            int x = stoi(cp);

            char r = 'a' + x - 1;
            res.push_back(r);

            i -= 2;
        }
        else
        {
            string x;
            x.push_back(s[i]);
            char r = 'a' + stoi(x) - 1;

            res.push_back(char(r));
        }
    }
    reverse(res.begin(), res.end());
    cout << res << endl;
}