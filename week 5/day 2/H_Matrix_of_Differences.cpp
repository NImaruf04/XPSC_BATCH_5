// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.11.30
// Time:   00:48:41
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
    int x = 1, y = (n * n);
    bool tr = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (!tr)
            {
                v.push_back(y);
                y--;
                tr = 1;
            }
            else
            {
                v.push_back(x);
                x++;
                tr = 0;
            }
        }
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            int s = cnt;
            for (int j = cnt; j < s + n; j++)
            {
                cout << v[j] << " ";
                cnt++;
            }
        }
        else
        {
            int r = cnt;
            for (int j = r + n - 1; j >= r; j--)
            {
                cout << v[j] << " ";
                cnt++;
            }
        }
        cout << endl;
    }
}