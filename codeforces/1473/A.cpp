/********************************************************************************************************************************************************************** 
                                                                                                                   
                                                          __Bismillahir Rahmanir Rahim__                                     
                                                American International University Bangladesh (AIUB)  
                                                              Hadiur Rahman Nabil                      
                                                                                                                 
                                                                                                                  
***********************************************************************************************************************************************************************/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector <int> vi;

#define pb push_back
#define mp make_pair
#define gcd(a,b) __gcd(a,b)
#define endl "\n"

const int mod = 1e9 + 7;
const double PI = 3.1415926535897932384626;
const int mod_2 = 998244353;
const int MAX=100005;


void solve()
{
   ll n,d;
   cin>>n>>d;
   vector<ll>v;

   for(int i=0;i<n;i++)
   {
       ll x;
       cin>>x;
       v.push_back(x);
   }
   int f=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(v[i]+v[j]<=d)
            {
                f=1;
                break;
            }
        }
    }
 
    int f1=0;
    for(int i=0;i<n;i++){
        if(v[i]>d){
            f1=1;
            break;
        }
    }
 
    if(!f1 || f==1)cout<<"YES\n";
    else cout<<"NO\n";

}
    


   
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    #endif

    
    

 ll t;
 cin>>t;
 while(t--)
 {
     solve();
 }
    
  return 0;
}