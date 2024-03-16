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
  string s; cin>>s;
  vector<int> a(26);
   
   for(int i = 0;i<s.size(); i++)
   {
       a[s[i]-'a']++;
   }
  for(int i = 0;i < 26; i++)
   {
      if(a[i] == 0)
      {
        cout<< char(i+'a');
        return 0;
      }
   }
   cout<<"None";
 }
   
