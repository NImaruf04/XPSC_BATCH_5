// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.12.22
// Time:   09:41:31
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
    string v;
    int x = -1, tmp = -1, fst = -1;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        if (i == 0)
        {
            v.push_back('1');
            tmp = val;
            fst = val;
        }
        else
        {
            if (x == -1)
            {
                if (val >= tmp)
                {
                    v.push_back('1');
                    tmp = val;
                }
                else
                {
                    if (val <= fst)
                    {
                        x = 1;
                        v.push_back('1');
                        tmp = val;
                    }
                    else
                    {
                        v.push_back('0');
                    }
                }
            }

            else
            {
                if (val >= tmp && val <= fst)
                {
                    v.push_back('1');
                    tmp = val;
                }
                else
                    v.push_back('0');
            }
        }
    }
    cout << v << endl;
}