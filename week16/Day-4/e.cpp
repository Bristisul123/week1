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


void solve()
{ 

  int n,cnt = 0,ans = 0, on =0, ze = 0; cin>>n;
 string s ,s2 = ""; cin>>s;

    for(int i = 0; i<n ;i++)
    {
      if (s[i] == '0')
      {
       cnt++;
        if(cnt == 1) ze++;
      }
      else
        on++, cnt = 0;

    }
     //cout<< ze<< " "<<on<<" ";
      if(on > ze) yes;
      else no;
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
    


