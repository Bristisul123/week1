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
bool prime(int n)
{
   
    for (int i = 2; i * i<= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
 
}
int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int T=1; cin>>T;
   while(T--)
    {
        int d; cin>>d;
        int a= d+1;
       while(!prime(a))
        {
          a++; 
        }
         int b = a + d;
        while(!prime(b)){
           b++; 
        }
        cout<< a* b <<nl;
    }
    return 0;
}
    


