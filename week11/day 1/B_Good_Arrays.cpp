// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2025.01.06
// Time:   12:22:17
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
    map<int, int> m;
    int ar[n],sum=0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        sum+=ar[i];
        m[ar[i]]++;
    }
    bool tr = 0;
    int x=n-m[1];
    sum-=x;
     
    if(x==0||n==1)cno;
    else if(sum>=(2*(n-x)))cyes;
    else cno;

}