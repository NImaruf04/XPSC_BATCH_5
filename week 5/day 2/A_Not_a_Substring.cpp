// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.12.03
// Time:   18:12:14
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
    string s;
    cin >> s;
    if (s == "()")
        cno;
    else
    {
        string s1, s2;
        cyes;
        for (int i = 1; i <= s.size(); i++)
            s1.push_back('(');
        for (int i = 1; i <= s.size(); i++)
            s1.push_back(')');
        for (int i = 1; i <= s.size(); i++)
            s2 += "()";

        if( s1.find(s)==string::npos)cout<<s1<<endl;
        else cout<<s2<<endl;
       
    }
}