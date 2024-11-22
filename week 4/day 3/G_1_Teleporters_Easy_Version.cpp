// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.11.22
// Time:   08:04:47
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
    priority_queue<int, vector<int>, greater<int>> p;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        p.push(x + i);
    }
    int res = 0;
    while (!p.empty())
    {
        if (p.top() <= e)
        {
            res++;
            e -= p.top();
            p.pop();
        }
        else
            break;
    }
    cout<<res<<endl;
}