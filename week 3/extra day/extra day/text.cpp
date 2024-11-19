// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.11.19
// Time:   22:31:02
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
    string txt, pat;
    cin >> txt >> pat;
    map<char, int> m;
    map<char, int> res;
    for (int i = 0; i < pat.size(); i++)
        m[pat[i]]++;
    for (int i = 0; i < txt.size(); i++)
    {
        if (m[txt[i]] > 0)
            res[txt[i]]++;
    }
    int cnt = INT_MAX;
    for (int i = 0; i < pat.size(); i++)
    {
        //  cnt=min(cnt,(res[pat[i]]/m[pat[i]]));
        cout << res[pat[i]] << " " << m[pat[i]] << endl;
    }
    // cout<<cnt<<endl;
}