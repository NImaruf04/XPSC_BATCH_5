// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.11.12
// Time:   13:10:10
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
    int cnt = 1;
    cout << 2 << endl;
    int x = ceil(float(n + n - 1) / 2);
    cout << n << " " << n - 1 << endl;
    n -= 2;

    int temp = x;

    while (n > 0)
    {
        cout << temp << " " << n << endl;
        temp = ceil(float((x + n) / 2));

        n--;
        x = temp;
    }
}