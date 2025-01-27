// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2025.01.24
// Time:   15:31:52
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
    multiset<int> cp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cp.insert(x);
    }

    for (int i = n; i >= 0; i--)
    {
        bool tr = 0;
        multiset<int> s = cp;

        for (int j = 1; j <= i; j++)
        {

            if (s.empty())
            {
                tr = 1;
                break;
            }
            int x = (i - j + 1);
            auto it = s.upper_bound(x);
            // if(it!=s.end()&&i==2)cout<<*it<<endl;
            if (it == s.begin())
            {
                tr = 1;
                break;
            }
            else
            {
                it--;

                s.erase(it);

                s.insert(*s.begin() + x);

                s.erase(s.begin());

                // cout << x << " " << *it << " " << r <<" "<<r+x<< endl;
            }
        }
        if (!tr)
        {
            cout << i << endl;
            break;
        }
    }
}
