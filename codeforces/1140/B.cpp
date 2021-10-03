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

const int MOD = 1e9 + 7;
const double PI = 3.1415926535897932384626;
const int mod_2 = 998244353;
const int MAX=100005;


void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int sol=n-1;
    for(int i=0;i<n;i++)
       {
        if(s[i]=='>')
          {
             sol=min(sol,i);
             break;
          }
        }
    for(int i=n-1;i>=0;i--)
        {
        if(s[i]=='<')
          {
            sol=min(sol,(n-1)-i);
          }
        }
    cout<<sol<<'\n';
    
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

    
    

 int t;
 cin>>t;
 while(t--)
 {
     solve();
 }
    
  return 0;
}