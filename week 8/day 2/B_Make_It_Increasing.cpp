// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.12.23
// Time:   10:57:10
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
    int mi = ar[n - 1];
    if (mi == 0 && n > 1)
        cout << -1 << endl;
    else if (mi == 0 && n == 1)
        cout << 0 << endl;
    else
    {
        bool tr = 0;
        int cnt = 0;
        for (int i = n - 2; i >= 0; i--)
        {

            while (ar[i] >= mi)
            {
                if (ar[i] == 0)
                {   
                    if(i==0)break;
                    else{
                    tr = 1;
                    break;}
                }
                else if (ar[i] < mi)
                    break;
                ar[i] = ar[i] / 2;
                cnt++;
            }

            mi = ar[i];
            if (mi == 0 && i != 0)
            {
                tr = 1;
                break;
            }
        }
        if (tr)
            cout << -1 << endl;
        else
            cout << cnt << endl;
    }
}