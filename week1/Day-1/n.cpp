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
  int n ,sum = 0; cin>>n;
  vector<int> a(n);
   for(int i = 0 ;i < n; i++){
      cin>>a[i];
      sum += a[i];
   }
   cout<<((n*(n+1))/2)-sum;
   
  
 }
   
