// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.11.19
// Time:   09:01:43
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
    NI
    {
        solve();
    }
    return 0;
}
void solve()
{
    int n, e;
    cin >> n >> e;
    int ar[n], arr[e];
    vector<int> v;
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    for (int j = 0; j < e; j++)
        cin >> arr[j];
        int st=0,en=0;
    while(st<n||en<e){
        if(st==n){
            v.push_back(arr[en]);
            en++;
        }
        else if(en==e){
            v.push_back(ar[st]);
            st++;
        }
        else{
            if(ar[st]<=arr[en]){
                v.push_back(ar[st]);
                st++;
            }
            else {
                v.push_back(arr[en]);
                en++;
            }
        }
    }
    for(auto xx:v)cout<<xx<<" ";
    cout<<endl;
}