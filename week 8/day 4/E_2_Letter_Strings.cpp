// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2025.01.02
// Time:   11:21:45
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
    map<char, int> mf;
    map<char, int> ms;
    map<string, int> cnt;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
        mf[s[0]]++;
        ms[s[1]]++;
        cnt[s]++;
    }
    int res = 0;
    for (auto x : v)
    {
        res+=mf[x[0]]-1;
        res+=ms[x[1]]-1;
        mf[x[0]]--;
        ms[x[1]]--;
        cnt[x]--;
        res-=cnt[x];
        res-=cnt[x];
    }
    cout << res << endl;
}