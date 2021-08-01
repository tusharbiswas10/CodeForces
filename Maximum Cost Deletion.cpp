#include <bits/stdc++.h>
#include <iostream>
#define ll long long int
#define mod 1000000007
#define endl "\n"
#define pb push_back
#define max2(a,b)   ((a<b)?b:a)
#define max3(a,b,c) max2(max2(a,b),c)
#define min2(a,b)   ((a>b)?b:a)
#define min3(a,b,c) min2(min2(a,b),c)
#define ch() getchar()


using namespace std;

template<typename T>void read(T&x){
    static char c;static ll f;
    for(c=ch(),f=1;c<'0'||c>'9';c=ch())if(c=='-')f=-f;
    for(x=0;c>='0'&&c<='9';c=ch())x=x*10+(c&15);x*=f;
}

const int maxn = 1e5 + 7;

const int INF = 1000000009;
int ABS(int a){return max(a, -a);}
ll ABS(ll a){return max(a, -a);}
double ABS(double a){return max(a, -a);}


double Means(int sum, int N)
{
    
    double d = (double)sum / (double)N;

       return d;
}
 
int smallestDivisor(int n)
{
    
    if (n % 2 == 0)
        return 2;
 
   
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return i;
    }
 
    return n;
}



 
 
 
 
int main(){
    
   
   ios_base::sync_with_stdio(false); cin.tie(NULL);

   vector<ll>store;
  ll t;
  cin>>t;
  for (ll iii = 0; iii < t; ++iii)
  {
      

      ll x,y,z;//n a b
      cin>>x>>y>>z;
      ll v1;
      string str;
      cin>>str;

      ll final1;

     

      ll ans= x*y+x*z;

      
    if(z<0)
    {  
        ll temp=0,count=0;
        char store1=str[0];
        char store2=str[0];
        char store3=str[x-1];


        for(auto run:str)
        {
            if(run!=store1 && run!=store2)
            {   
                temp++;
             } 

              store1=run;
        }

        temp+=1;
        
        final1=x*y+temp*z;

        cout<<final1<<endl;
    }
    else
    {
        cout<<ans<<endl;
    }
    


  }

   
    return 0;
}
