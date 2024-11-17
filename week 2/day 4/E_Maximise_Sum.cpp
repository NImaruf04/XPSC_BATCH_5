// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.11.11
// Time:   21:29:58
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
    vector<int> v;

    int tot = 0, mi = INT_MIN, cz = 0, pmi = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x >= 0)
        {
            if (x == 0)
                cz++;
            tot += x;
            if (x < pmi)
                pmi = x;
        }

        else
        {
            v.push_back(x);
            if (x > mi)
                mi = x;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        tot += abs(v[i]);
    }
    if (cz > 0 || v.size() % 2 == 0)
        cout << tot << endl;
    else
    {
        if (abs(mi) > pmi)
        {
            cout << tot - (pmi + pmi) << endl;
        }
        else
        {
            cout << tot + (mi + mi) << endl;
        }
    }
}