// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.11.18
// Time:   12:23:49
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
    int n, m;
    cin >> n >> m;
    int ar1[n], ar2[m];
    for (int i = 0; i < n; i++)
        cin >> ar1[i];
    for (int j = 0; j < m; j++)
        cin >> ar2[j];
    int res = 0;
    int i = 0, j = 0;
    while (i < m)
    {
        int s = ar2[i];
        while (j < n)
        {
            if (ar1[j] < ar2[i])
            {
                res++;
                j++;
            }
            else break;
        }
        cout << res << " ";
        i++;
    }
    cout<<endl;
}