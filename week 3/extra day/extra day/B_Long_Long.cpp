// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.11.19
// Time:   19:04:40
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
    int ar[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if (ar[i] < 0)
            sum += abs(ar[i]);
        else
            sum += ar[i];
    }
    int st = 0, en = 0, cnt = 0;
    while (en < n)
    {
        if (ar[en] >= 0)
            en++;
        else{
            cnt++;
            while(ar[en]<=0)en++;
        }
            
    }
    cout<<sum<<" "<<cnt<<endl;
}