#include <bits/stdc++.h>
#define int long long
#define nl "\n"
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define lower(x) transform(x.begin(), x.end(), x.begin(), ::tolower)
#define upper(x) transform(x.begin(), x.end(), x.begin(), ::toupper)
typedef unsigned long long  ull;
using namespace std;

int32_t main()
{
  ios::sync_with_stdio(false);
    cin.tie(NULL);
  int n , m, cnt = 0; cin>>n>>m;
  
  for(int i = 0;i< n+1;i++)
  {
    for(int j = 0; j< n+1; j++)
    {
      for(int k = 0; k< n+1 ; k++)
      {
        if(i+j+k <= n && i*j*k <= m)
          cnt++;
      }
    }
  }
  cout<<cnt;
  }
   
