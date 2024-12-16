// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.12.10
// Time:   13:07:13
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
    

   deque<int> v;
    
    int i = 0;
    for (int i = 0; i <=__lg(n); i++)
    {
        if (n>>i&1)
        {
            
              if(n-(1<<i)>0)  v.push_front(n-(1<<i));
        }
    }
    v.push_back(n);
    
    cout << v.size() << endl;
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    
}