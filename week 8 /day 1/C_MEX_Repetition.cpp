// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.12.22
// Time:   11:23:01
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
    int ar[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        m[ar[i]]++;
    }
    priority_queue<int, vector<int>, greater<int>> p;
    for (int i = 0; i <= n; i++)
    {
        if (m[i] == 0)
            p.push(i);
    }
    for (int i = 0; i <= n; i++)
    {
        int x = ar[i];
        ar[i] = p.top();
        p.pop();
        p.push(x);
    }

    e--;
    int cnt = e % (n + 1);
    int ar2[n + 1];
    for (int i = 0; i <= n; i++)
    {
        int k = i + cnt;
        if (k > n)
            k = k - n - 1;
        ar2[k] = ar[i];
    }
    for (int i = 0; i < n; i++)
        cout << ar2[i] << " ";

    cout << endl;
}