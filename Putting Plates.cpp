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
      
    ll r,c,count=0;
    cin>>r>>c;
    ll sa[r][c];


    for(ll i=0;i<r;i++){
        for(ll j=0;j<c;j++)
            sa[i][j]=0;
    }

    sa[r-1][c-1]=1;
    sa[0][0]=1;
    
    sa[0][c-1]=1;
    sa[r-1][0]=1;


    
    if(c%2==0){
        for(ll j=3;j<c;j+=2){
            sa[r-1][j]=1;
            sa[0][j]=1;

            count++;
            
        }
    }
    else{
        for(ll i=2;i<c;i+=2){
            sa[r-1][i]=1;

            sa[0][i]=1;
            
        }
    }

    if(r%2==0){
        for(ll k=3;k<r;k+=2){

            sa[k][c-1]=1;
            sa[k][0]=1;

            // cout<<"its ok"<<endl;
            
        }
    }
    else{
        for(ll k=2;k<r;k+=2){
            sa[k][0]=1;
            sa[k][c-1]=1;
        }
    }


    for(ll i=0;i<r;i++){
        for(ll j=0;j<c;j++)
            cout<<sa[i][j];
        cout<<endl;
    }
    cout<<endl;




   
      


      


  }

    
    

    
    return 0;
}
