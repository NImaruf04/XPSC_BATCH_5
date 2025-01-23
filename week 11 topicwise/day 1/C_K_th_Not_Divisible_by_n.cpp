// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2025.01.23
// Time:   16:08:55
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
   

    int st=1,en=1e18;
    while(st<=en){
        int mid=st+((en-st)/2);
        
        if(mid-(mid/n)>e){
            en=mid-1;
            //cout<<mid<<endl;
        }
        else if(mid-(mid/n)<e){
          st=mid+1;
          //cout<<mid<<endl;
        }
        else {
            if(mid%n==0)cout<<mid-1<<endl;
            else cout<<mid<<endl;
            break;
        }
       
    }


}