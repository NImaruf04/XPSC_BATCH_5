#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    vector<int> v2;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        if(mp[x]==0){v2.push_back(x);mp[x]++;}
        
    }
   
   
    for (int i = 0; i < n; i++)
    {
        for (int j =0; j<v2.size(); j++)
        {
            
                int s1=(1<<v2[j]);
                int s2=(1<<(v2[j]-1));
                if(v[i]%s1==0)v[i]+=s2;
            
        }
    }
    for(auto xx:v)cout<<xx<<" ";
    cout<<endl;
    //cout << (1 << 0);
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}