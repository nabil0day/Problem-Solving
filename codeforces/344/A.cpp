/*****                                            
 *                                                   __Bismillahir Rahmanir Rahim__
 *                                          American International University Bangladesh (AIUB) 
 *                                                         Hadiur Rahman Nabil
                                                                 
                                                               
                                                          
*****/
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

typedef long long ll;
typedef long double ld;

//Palindrome--
// for(int i=s.size()-1;i>=0;--i){s_rev.push_back(s[i]);} if(s==s_rev)    

 //sort(a.begin(), a.end());sort(b.begin(), b.end());if(a==b)
  
//Find_Last + Delete_Last--
//num%10    +   num/10
//Fibonacci--
//for(int i=1;i<=N-2;i++){ num3=num1(1)+num2(2);num1=num2;num2=num3(Fibonacci);


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

ll n,count=0,i;
cin>>n;
int t[100000];

    for( i=1;i<=n;i++)
    
    
    cin>>t[i];
    
    for(i=1;i<=n;i++)
    {

    if(t[i]!=t[i+1])
    {
        count++;
    }
    
    
    }

    
    
    cout<<count<<"\n";
    

   return 0;

}
        

        

    
 

    

    

  
    
    
    





 

 


