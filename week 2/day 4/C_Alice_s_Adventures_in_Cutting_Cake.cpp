// اعوذ بالله من الشيطان الرجيم
//  'بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// Date:   2024.11.10
// Time:   22:05:55
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
    int n, a, b;
    cin >> n >> a >> b;

    int v[n];
    bool xxr = 0;
    int cnt = 0, tot = 0, min = INT_MAX;
    int mb=INT_MIN;
    for (int j = 0; j < n; j++)
    {
        cin >> v[j];
        tot += v[j];
        if (v[j] < min)
            min = v[j];
        if (v[j] > mb)
            mb = v[j];
            
    }
    
    if (min >= b && n - 1 == a)
        cout<<mb<<endl;
    else if (min >= b && n == a)
        cout << 0 << endl;

    else
    {
        int i = 0, ii = n - 1, gese = 0;
        while (i < n && ii >= 0 && cnt <= a - 1)
        {
            if (i >= ii)
                break;
            bool fr = 0, tr = 0;
            int sum = 0, j = i, sum2 = 0, k = ii;
            while (sum < b)
            {
                if (j == n || j > ii)
                {
                    tr = 1;
                    break;
                }

                sum += v[j];
                j++;
            }

            while (sum2 < b)
            {
                if (k < 0 || k < i)
                {
                    fr = 1;
                    break;
                }
                sum2 += v[k];
                k--;
            }
            if (!tr && !fr)
            {
                if (sum <= sum2)
                {
                    gese += sum;
                    i = j;
                }
                else
                {
                    gese += sum2;
                    ii = k;
                }
                cnt++;
            }
            else if (!tr)
            {
                gese += sum;
                i = j;
                cnt++;
            }
            else if (!fr)
            {
                gese += sum2;
                ii = k;
                cnt++;
            }
            else
                break;

            // cout<<sum<<" "<<sum2<<" "<<gese<<endl;
        }

        if (cnt == a)
            cout << tot - gese << endl;
        else
            cout << -1 << endl;
    }
}