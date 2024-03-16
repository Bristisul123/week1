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
  int n , m, sum = 0; cin>>n;
  vector<int>a(n);
 
  for(int i = 0; i < n ;i++)
  {
     cin>>a[i];
     sum+= a[i];
  }

  if(sum % 2 == 0) cout<< sum;
  else
  {
     vector<int> v;
     for (int i = 0; i < n; i++)
     {
        if(a[i] % 2 != 0) v.push_back(a[i]);
     }
     sort(v.begin(),v.end());
     cout<< sum - v[0];
  }
  }
   
