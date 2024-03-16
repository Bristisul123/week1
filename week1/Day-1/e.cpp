#include <bits/stdc++.h>
#define int long long
#define all(x) x.begin(), x.end()
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

   int a,b,c; cin>>a>>b>>c;
   int ans = -1;
   for(int i = a; i <= b ;i++)
   {
    if(i%c == 0)
    {
      ans = i; break;
    }
   }
   cout<<ans;
   
}
    


