// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.11.12
// Time:   23:22:21
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
    string s, e;
    cin >> s >> e;
    if (s[s.size() - 1] != e[e.size() - 1])
    {
        char st = s[s.size() - 1];
        char ss = e[e.size() - 1];
        if (st == 'M' && ss == 'S')
            cout << '>' << endl;
        else if (st == 'S' && ss == 'M')
            cout << '<' << endl;
        else if ((st == 'M' || st == 'S') && ss == 'L')
            cout << '<' << endl;
        else if ((ss == 'M' || ss == 'S') && st == 'L')
            cout << '>' << endl;
    }
    else
    {
        if (s[s.size() - 1] == 'S')
        {
            if (s.size() == e.size())
                cout << '=' << endl;
            else if (s.size() > e.size())
                cout << '<' << endl;
            else
                cout << '>' << endl;
        }
        else
        {
            if (s.size() == e.size())
                cout << '=' << endl;
            else if (s.size() > e.size())
                cout << '>' << endl;
            else
                cout << '<' << endl;
        }
    }
}