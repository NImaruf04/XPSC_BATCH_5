// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.11.27
// Time:   21:24:44
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
    int ar[n - 1];
    for (int i = 0; i < n - 1; i++)
        cin >> ar[i];
    sort(ar, ar + n - 1);
    cout << 1 << " " << ar[0] - 1 << " ";
    ar[0] = ar[0] - 1;
    for (int i = 1; i < n - 1; i++)
    {
        cout << ar[i] - ar[i - 1] << " ";
        ar[i] = ar[i] - ar[i - 1];
    }
    cout << endl;
}