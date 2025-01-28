// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2025.01.27
// Time:   02:56:40
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float double
#define cyes cout << "YES" << endl
#define cno cout << "NO" << endl
#define endl '\n'
#define NI                       \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);              \
    void solve();
int32_t main()
{
    NI
    solve();
    return 0;
}
void solve()
{
    int n, e;
    cin >> n >> e;
    vector<string> v(n);
    map<string, bool> m;
    bool xr = 0;
    string res;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        m[v[i]] = 1;
    }

    for (int i = 0; i < n; i++)
    {

        string rev = v[i];
        reverse(rev.begin(), rev.end());
        if (v[i] == rev && !xr)
        {

            int cnt = 0;
            for (int j = i; j < n; j++)
            {
                if (v[j] == v[i])
                {
                    cnt++;
                }
            }
            if (cnt % 2 != 0 && !xr)
            {
                xr = 1;
                res = v[i];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {

        string rev = v[i];
        reverse(rev.begin(), rev.end());
        if (v[i] == rev && m[v[i]])
        {

            int cnt = 0;
            for (int j = i; j < n; j++)
            {
                if (v[j] == v[i])
                {
                    cnt++;
                    m[v[j]] = 0;
                }
            }

            for (int p = 0; p < cnt / 2; p++)
            {
                res = res + v[i];
                res = v[i] + res;
            }
        }
        else
        {
            if (m[v[i]] && m[rev])
            {
                int cn1 = 0, cn2 = 0;
                for (int j = i; j < n; j++)
                {
                    if (v[j] == v[i])
                    {
                        cn1++;
                        m[v[j]] = 0;
                    }
                    if (v[j] == rev)
                    {
                        cn2++;
                        m[rev] = 0;
                    }
                }
                for (int p = 0; p < min(cn1, cn2); p++)
                {
                    res = res + rev;
                    res = v[i] + res;
                }
            }
        }
    }
    cout << res.size() << endl;
    if (res.size() > 0)
        cout << res << endl;
}