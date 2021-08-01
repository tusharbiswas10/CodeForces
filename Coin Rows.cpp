    #include <bits/stdc++.h>
    #define ll          long long int
    #define endl        "\n"
    #define mod 1000000007
    #define pb push_back
    using namespace std;
    const ll N=1e5+5;
    const ll p=998244353;
    clock_t startTime;
    double getCurrentTime() {
        return (double)(clock() - startTime) / CLOCKS_PER_SEC;
    }
     
    ll palindromeChecker(ll input){
        ll k, val, d, temp = 0;
     
         k=input;
     
         k = val;
     
         do
         {
             d = val % 10;
             temp = (temp * 10) + d;
             val = val / 10;
         } while (val != 0);
     
        
     
         if (k == temp){
             return 1;
         }
         else{
             return 0;
         }
     
        
    }
     
     
    ll power(ll base,ll pow){
        ll res=1;
        for (int i = 1; i <=pow; ++i)
        {
            res=res*base;
        }
     
        return res;
    }
     
    ll modInverse(ll a, ll m)
    {
        for (int x = 1; x < m; x++)
            if (((a%m) * (x%m)) % m == 1)
                return x;
    }
    bool check(ll array[], ll n)
    {   
        bool flag = 0;
     
        for(ll i = 0; i < n - 1; i++)      
        {         
            if(array[i] != array[i + 1])
                flag = 1;
        }
     
        return flag;
    }
     
     
     
    int main(){
    	ios_base::sync_with_stdio(false); cin.tie(NULL);
     
    	ll t;
        cin>>t;
        
        
       
       for (int iii = 0; iii < t; ++iii)
       {    
     
           ll m,n,res;
           cin>>m;
     
           vector<ll> x(m+1,0);
           vector<ll> y(m+1,0);
           vector<ll> r1(m+1,0);
           vector<ll> r2(m+1,0);
           vector<ll> z(m+1,0);
     
           for(ll i=1;i<=m;i++)
            { 
                cin>>x[i]; 
            }
     
            for(ll i=1;i<=m;i++)
            { 
                cin>>y[i]; 
            }
     
            for(ll i=1 ; i<=m ; i++)
             { 
                r1[i]=r1[i-1]+x[i]; 
                r2[i]=r2[i-1]+y[i];
        }
    ll c=0;
        res=r1[m]-r1[1];
     
        for(ll i=2 ; i<=m ; i++)
            {
                res=min(res,max(r2[i-1],r1[m]-r1[i]));
            }
    cout<<res<<endl ;
            
       }
    	
        
        return 0;
    }
