// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2025.01.27
// Time:   18:04:45
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
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> ar(n);

    for (int i = 0; i < n; i++)
        cin >> ar[i];

    map<int, int> m;
    for (int i = 0; i < a; i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }

    if (a > n)
    {
        cout << 0 << endl;
        return;
    }

    int st = 0, en = 0;

    int res = 0;
    int cnt = 0;
    map<int, int> cst;
    while (en < n)
    {
        cst[ar[en]]++;
        if (m[ar[en]] >= cst[ar[en]])
            cnt++;

        if (en - st + 1 >= a)
        {

            if (cnt >= b)
                res++;
            if (m[ar[st]] > 0 && cst[ar[st]]<=m[ar[st]])
                cnt--;

            cst[ar[st]]--;
            st++;
        }
        en++;
    }

    cout << res << endl;
}