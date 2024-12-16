// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.12.14
// Time:   11:25:29
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

bool pl(int n)
{
    string s = to_string(n);

    for (int i = 0; i < (s.size() / 2); i++)
    {
        if (s[i] != s[s.size() - i - 1])
            return 1;
    }
    return 0;
}
vector<int> pal;

int32_t main()
{

    NI for (int i = 0; i < (1LL << 15); i++)
    {
        if (!pl(i))
            pal.push_back(i);
    }

    MARUF
    {
        solve();
    }
    return 0;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n),cnt((1LL<<15)+1);
    

    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        cnt[v[i]]++;
    }
    int res = n;
    
    for (auto x : v)
    {
        for (auto p : pal)
        {

           
                
                    res+=cnt[x^p];
               
            
        }
    }
    cout << res/2 << endl;
}