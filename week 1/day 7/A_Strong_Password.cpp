// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float double
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
    int i;
    bool tr = 0;
    for (i = 1; i < s.size(); i++)
    {
        if (s[i - 1] == s[i])
        {
            if(s[i]!='z')s.insert(s.begin() + i, char(s[i] + 1));
            else s.insert(s.begin() + i, 'a');
            tr = 1;
            break;
        }
    }

    if (!tr)
    {
        if(s[s.size()-1]!='z')s.push_back(char(s[s.size() - 1] + 1));
        else s.push_back('a');
    }
    cout << s << endl;
}