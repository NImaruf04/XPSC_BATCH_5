// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.12.04
// Time:   18:09:26
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
    int n, e;
    cin >> n >> e;
    vector<int> v(n);
    int ar[e + 1];
    for (int i =1; i <=e; i++)
        cin >> ar[i];
        int j=n-1;
        if(n==1||e==1)cyes;
        else {
    for (int i = e; i > 1; i--)
    {
        int x = ar[i] - ar[i - 1];
        v[j]=x;
        j--;
    }
    while(j>0){
        v[j]=v[j+1];
        ar[1]-=v[j];
        j--;
    }
    v[0]=ar[1];
    if(is_sorted(v.begin(),v.end()))cyes;
    else cno ;}
}