#include <bits/stdc++.h>
#define int long long
#define all(x) x.begin(), x.end()
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define nl "\n"
#define lower(x) transform(x.begin(), x.end(), x.begin(), ::tolower)
#define upper(x) transform(x.begin(), x.end(), x.begin(), ::toupper)
typedef unsigned long long  ull;
using namespace std;

int inverse(vector<int>v, int n)
{
      int ze =0, one = 0;
      for(int i =0; i<n;i++)
      {
         if(v[i] == 1) one ++;
         else ze += one;
      }
      return ze;
}

void solve()
{ 

  int n,sum = 0, cnt = 0,id = -1; cin >>n;
  vector<int>v(n);

  for(int i=0;i<n;i++)
    cin>>v[i];
    
    int ans = inverse(v,n);
    for(int i = 0; i<n; i++)
    {
        if(v[i] == 0) {
            v[i] = 1, id = i;
            break;
        }
    }
    ans = max(ans, inverse(v,n));
    if(id != -1) v[id] = 0;
    for(int i = n-1; i>=0; i--)
    {
        if(v[i] == 1) 
        {
             v[i] = 0;
             break;
        }
    }
    ans = max(ans, inverse(v,n));
    cout<< ans <<nl;
}
int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

    int T=1; cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}
    


