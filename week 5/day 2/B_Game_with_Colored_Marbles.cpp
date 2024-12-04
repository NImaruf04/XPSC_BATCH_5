// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.12.02
// Time:   20:54:54
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
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }
    vector<int> p;
    for (auto mm : m)
    {
        int en = mm.second;
        p.push_back(en);
    }
    sort(p.begin(), p.end());
    // for(auto pp:p)cout<<pp.first<<" "<<pp.second<<endl;
    bool tr = 0;
    int res = 0;
    for (auto pp : p)
    {
        if (pp == 1)
        {
            if (!tr)
            {
                tr = 1;
                res += 2;
            }
            else
                tr = 0;
        }
        else
            res++;
    }
    cout << res << endl;
}