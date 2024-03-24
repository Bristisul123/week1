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


bool solve(vector<int> & a,int n)
{ 
  int i = 0, j = n-1;
  while(i<j)
  {
    if(a[i] != a[j])
     {
        return 0;
     }
     i++, j--;
  } 
  return 1;

}
int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

    int T=1; cin>>T;
    while(T--)
    {
       
  int n, k, aa = 0, b = 0; cin>>n;
  vector<int>a(n);
  vector<int>v,v2;
  for(int i = 0;i< n ;i++)
    cin>>a[i];
  int i = 0, j = n-1, flag = 1;
  while(i<j)
  {
    if(a[i] != a[j])
     {
        flag = 0;
        aa = a[i];
        b = a[j]; 
        break;
     }
     i++, j--;
  }
  if(flag) yes;
   else
        {
           
 
            for (int i = 0; i < n; i++)
            {
                if (a[i] != aa)
                    v.push_back(a[i]);
                if (a[i] != b)
                    v2.push_back(a[i]);
            }
 
            bool ans = solve(v, v.size()) , ans2 = solve(v2, v2.size());
 

    if(ans  || ans2) yes;
    else no;
    }
}}
    


