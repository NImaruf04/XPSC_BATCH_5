// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.12.21
// Time:   23:39:52
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
    // vector<int>v={3,4,5,6,6,7,2};
    // v.pop_back();
    // cout<<v[v.size()-1]<<endl;
    // v.erase(v.begin());
    // cout<<v.front()<<endl;

    int n;
    cin >> n;
    vector<int> v[27];
    string s;
    cin >> s;
    bool fr = 0;
    int mincnt = INT_MAX;
    for (char ss = 'a'; ss <= 'z'; ss++)
    {
        int st = 0, en = n - 1;
        int cnt = 0;
        bool tr = 0;
        while (st < en)
        {
            if (s[st] != s[en])
            {
                if (s[st] == ss)
                {
                    cnt++;
                    st++;
                }
                else if (s[en] == ss)
                {
                    cnt++;
                    en--;
                }
                else
                {
                    tr = 1;
                    break;
                }
            }
            else
            {
                st++;
                en--;
            }
        }
        if (!tr)
        {
            fr = 1;
            if (cnt < mincnt)
                mincnt = cnt;
        }
    }
    if (!fr)
        cout << -1 << endl;
    else
        cout << mincnt << endl;
}