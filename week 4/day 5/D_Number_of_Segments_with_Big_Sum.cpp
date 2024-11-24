// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.11.23
// Time:   12:44:38
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
    int st = 0, en = 0, sum = 0, cnt = 0;
    
    while (en < n)
    {
        sum += ar[en];
        while(sum>=e&&st<=en){
            sum-=ar[st];
            st++;
        }
        cnt+=st;
        en++;
    }
   cout<<cnt<<endl;
}