// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.11.24
// Time:   22:35:03
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float double
#define cyes cout << "YES" << endl
#define cno cout << "NO" << endl
#define endl '\n'
#define NI                       \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);              \
    void solve();
int32_t main()
{
    NI
    solve();
    return 0;
}
void solve()
{
    int n, e;
    cin >> n >> e;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    int st = 0, en = 0;
    map<int, int> m;
    int cnt = 0;
    while (en < n)
    {
        m[ar[en]]++;
        if (m.size() <= e)
        {
            cnt += en - st + 1;
        }
        else
        {
            while (m.size() > e&&st<=en)
            {
                m[ar[st]]--;
                if (m[ar[st]] == 0)
                    m.erase(ar[st]);
                st++;
            }
            if (m.size() <= e)
                cnt += en - st + 1;
        }
        en++;
    }
    cout << cnt << endl;
}