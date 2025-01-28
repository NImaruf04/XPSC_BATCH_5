// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2025.01.27
// Time:   02:42:42
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
    map<char, int> m1;
    map<char, int> m2;
    for (int i = 0; i < s.size(); i++)
        m1[s[i]]++;
    
    bool tr = 0;

    for (int i = 0; i < e.size(); i++)
    {
        map<char, int> m3;
        for (int j = i; j < e.size(); j++)
        {
            m3[e[j]]++;
            if (m3 == m1)
            {
                tr = 1;
                break;
            }
        }
        if (tr)
            break;
    }
    if (tr)
        cyes;
    else
        cno;
}