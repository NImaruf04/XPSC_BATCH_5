// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float double
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
    priority_queue<pair<int, int>> p;
    for (auto xx : m)
    {
        p.push({xx.second, xx.first});
    }
    // cout<<p.size()<<endl;
    while (p.size() > 1)
    {
        pair<int, int> p1 = p.top();
        p.pop();
        pair<int, int> p2 = p.top();
        p.pop();
        p1.first--;
        p2.first--;
        if (p1.first > 0)
        {

            p.push(p1);
        }
        if (p2.first > 0)
        {
            p.push(p2);
        }
    }
    if (p.size() == 1)
        cout << p.top().first << endl;
    else
        cout << 0 << endl;
}