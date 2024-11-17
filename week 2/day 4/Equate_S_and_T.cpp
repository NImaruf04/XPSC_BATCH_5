// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.11.13
// Time:   21:45:26
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
    int n, m;
    cin >> n >> m;
    string s, e;
    cin >> s >> e;
    int ca = 0, cb = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a')
        {
            ca ++;
           
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (e[i] == 'a')
        {
          cb++;
        }
    }
    bool tr=0;
    for(int i=0;i<min(n,m);i++){
        if(s[i]=='a'&&e[i]=='a')break;
        if(s[i]!=e[i]){tr=1;break;}
       
    }
    if(!tr&&ca==cb){
        if(ca==0){if(n==m)cyes;
        else cno;}
        else cyes;
    }
    else cno;
}