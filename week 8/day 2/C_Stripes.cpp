// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.12.23
// Time:   08:20:00
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
    char ar[8][8];
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> ar[i][j];
        }
    }
  int cna=0,cnx=0;
    for (int i = 0; i < 8; i++)
    {
        int cnr = 0;
        for (int j = 0; j < 8; j++)
        {
            if (ar[i][j] == 'R')
                cnr++;

        }

        if (cnr == 8 )cna++;
    }
    for (int i = 0; i < 8; i++)
    {
        int cnb = 0;
        for (int j = 0; j < 8; j++)
        {
            if (ar[j][i] == 'B')
                cnb++;

        }

        if (cnb == 8 )cnx++;
    }
    if(cnx>cna)cout<<'B'<<endl;
    else cout<<'R'<<endl;
}