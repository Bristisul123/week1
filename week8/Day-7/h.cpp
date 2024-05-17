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


bool prime(int n){

    if(n ==1 ) return 0;
    for(int i =2; i*i <=n ;i++)
    {
        if(n % i ==0) return 0;
    }
    return 1;
}
int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

   int n; cin>>n;
if(prime(n)) cout << 1;
else if(n % 2 == 0) cout << 2;
else
{
    if(prime(n-2)) cout << 2;
    else cout << 3;
}
    
}
    


