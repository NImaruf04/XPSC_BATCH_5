// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
 
// Date:   2024.12.07
// Time:   12:22:25
#include <bits/stdc++.h>
using namespace std; 
#define int long long
#define float double
#define ccase cout<<"Case"<<" "<<T<<" "<<':'<<" "
#define cyes cout<<"YES"<<endl
#define cno cout<<"NO"<<endl
#define endl '\n'
#define NI                       \
    ios::sync_with_stdio(false);  \
    cin.tie(NULL);                 \
    cout.tie(NULL);                 \
 
#define MARUF                  \
    int TC;                     \
    cin >> TC;                   \
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
    int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0)
        {
            cout << 0 << endl;
        }
        else if (b % 2 == 0)
        {
 
            int x = ceil(float(b) / 2);
 
            int y = x * 7;
            if (y >= a)
            {
                cout << x << endl;
            }
            else
            {
                int k = ceil(float(a - y) / 15);
                cout << x + k << endl;
            }
        }
        else if (b % 2 != 0)
        {
            int x = ceil(float(b)/ 2);
            int y = ((x - 1) * 7) + 11;
 
            if (y >= a)
            {
                cout << x << endl;
            }
            else
            {
                int k = ceil(float(a - y) / 15);
                cout << x + k << endl;
            }
        }
}