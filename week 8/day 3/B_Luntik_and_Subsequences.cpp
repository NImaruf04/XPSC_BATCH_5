// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.12.24
// Time:   21:01:16
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
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        sum += ar[i];
    }

    int cnt = 0, on = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == 0)
        {
            cnt++;
        }
        if (ar[i] == 1)
            on++;
    }
    if (cnt == 0)
        cout << on << endl;
    else
    {  
        
        cout << on * (1LL<<cnt) << endl;
    }
}