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
const int  m = 1e4 + 9;
int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  vector <int> a;
  for(int i = 1; i<= m;i++) {
     a.push_back(pow(i,3));
 }
  int t; cin>>t;
  while(t--){
   int n;  cin>>n;
  bool f = 0;
  for(int i = 0; i<m ;i++)
  {
    if(a[i] >= n) break;

    int l = 0 , r = m-1 ,mid = 0;
    int ans = n - a[i];
    bool ok = 0;
    while(l<=r){
        mid =  (l+r)  / 2;
       if(a[mid] == ans )
       {
        ok = 1; break;
       } 
       else if(a[mid] > ans)  r =mid - 1;
       else l = mid + 1;
    }
    if(ok){
     f =1; break;
 }
  }
  if(f) yes;
  else no;

}
}