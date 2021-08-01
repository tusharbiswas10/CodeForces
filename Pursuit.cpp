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
      
    ll r,c,count=0,s=0,big=INF;
    ll si;
    cin>>si;
    vector<ll> store1(si);
    vector<ll> store2(si);
    vector<ll> temp1(si+1);
    vector<ll> temp2(si+1);

    for(ll i=0;i<si;i++){
        cin>>store1[i];
    }

    for(ll i=0;i<si;i++){
        cin>>store2[i];
    }

    sort(store1.begin(),store1.end(),greater<ll>());
    sort(store2.begin(),store2.end(),greater<ll>());

    

    for(ll i=1;i<=si;i++){
        temp1[i]=store1[i-1];
        temp1[i]+=temp1[i-1];
       
    }

    for(ll i=1;i<=si;i++){
    
        temp2[i]=store2[i-1];
        temp2[i]+=temp2[i-1];
    }

   

    while(s<big){

        ll z=si/4;
        ll m=(s+big)>>1;
        ll l = m*100;
        ll up_val =(si+m)-(si+m)/4;
        ll p=up_val-l;
        ll k=p/6;
        ll x = max(up_val-m,0LL);
        ll y=min(up_val,si);
        
        l+=temp1[x];
        ll h=temp2[y];


        if(l<h){
            s=m+1;
        }

        else{
            big=m;
        }
    }

    cout<<s<<endl;

  




   
      


      


  }

    
    

    
    return 0;
}
