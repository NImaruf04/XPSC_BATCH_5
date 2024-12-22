// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.12.21
// Time:   18:24:15
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
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    int res = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int x;
        if (i == 0)
        {
            x = ar[i + 1];
        }
        else if (i == n - 1)
        {
            x = ar[i - 1];
        }
        else
        {
            if(abs(ar[i]-ar[i+1])>=abs(ar[i]-ar[i-1]))x = ar[i+1];
            else x=ar[i-1];
        }
        if (abs(ar[i] - x) < res)
            res = abs(ar[i] - x);
    }
    cout << res << endl;
}