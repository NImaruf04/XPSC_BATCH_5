// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.12.07
// Time:   23:54:15
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
    int n, e;
    cin >> n >> e;
    map<int, int> m;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (m[x] == 0)
            v.push_back(x);
        m[x]++;
    }
    sort(v.begin(), v.end());
    int st = 0, en = 0, rest = -1, reen = -1, cnt = 0;
    bool tr = 1;
    while (en < v.size())
    {
        if (en == v.size() - 1)
        {

            if (cnt < (v[en] - v[st])+1 && m[v[en]] >= e )
            {
                tr = 0;
                cnt = v[en] - v[st]+1;
                rest = v[st];
                reen = v[en];
            }
            break;
        }
        else if (m[v[en] + 1] < e&&m[v[en]]>=e)
        {
            if (cnt < (v[en] - v[st]+1))
            {
                tr = 0;
                rest = v[st];
                reen = v[en];
                cnt = v[en] - v[st]+1;
            }
            st = en + 1;
        }
        else if (m[v[en]] < e)
        {
            st = en + 1;
        }

        en++;
    }
    if (tr)
        cout << -1 << endl;
    else
        cout << rest << " " << reen << endl;
}