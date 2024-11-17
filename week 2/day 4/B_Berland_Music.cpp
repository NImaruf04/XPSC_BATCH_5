// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.11.12
// Time:   06:21:39
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
    vector<int> v(n);
    string s;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        m[v[i]] = i;
    }
    cin >> s;
    vector<pair<int, int>> ze;
    vector<pair<int, int>> on;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            ze.push_back({v[i], m[v[i]]});
        }
        else
        {
            on.push_back({v[i], m[v[i]]});
        }
    }

    sort(ze.begin(), ze.end());
    sort(on.begin(), on.end());

    int x = 1;
    int ar[n];
    for (int i = 0; i < ze.size(); i++)
    {
        int pos = ze[i].second;

        ar[pos] = x;
        x++;
    }
    int y = ze.size() + 1;
    for (int i = 0; i < on.size(); i++)
    {
        int pos = on[i].second;

        ar[pos] = y;
        y++;
    }
    for (int i = 0; i < n; i++)
        cout << ar[i] << " ";
    cout << endl;
}