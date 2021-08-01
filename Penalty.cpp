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

bool funtemp2(ll inp1, ll inp2, ll cal){
    if(inp2+cal<inp1){
            return true;
    }
    else{
        return false;

    }
    }
double Meres(int sum, int N)
{
    
    double d = (double)sum / (double)N;

       return d;
}

bool funtemp3(ll inp1, ll inp2, ll cal){
    if(inp1+cal<inp2){
        return true;
    }
    else{
        return false;

    }
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
bool funtemp4(ll inp1, ll inp2, ll cal){
    if(inp2+cal<=inp1){
            return true;
    }
    else{
        return false;

    }
    }



ll hisab(vector<ll>&temp){
    ll res=9,temp2=0,temp3=0,x=1,cal;
    
    for(ll i=1;i<10;i+=2){
        cal = (10-i-1)/2;
        temp2=temp2+temp[i-1];
        
        cal=cal+1;
        if(funtemp3(temp2,temp3,cal-x) || funtemp2(temp2,temp3,cal) ){
            res=i-1;
            break;
        }

        temp3=temp3+temp[i];
        cal=cal-1;
        if( funtemp3(temp2,temp3,cal)||funtemp2(temp2,temp3,cal) ){
            res=i;
            break;
        }

        else{
            continue;
        }
    }

    ll n=res+1;
    return n;
}




 
 
 
 
int main(){
    
   
   ios_base::sync_with_stdio(false); cin.tie(NULL);

   
  ll t;
  cin>>t;
  for (ll iii = 0; iii < t; ++iii)
  { ll val=10,count=0;
    string s;
    cin>>s;
    vector<ll> temp(val);
    vector<ll> temp1(val);
    vector<ll> temp2(val);

    for(ll i=0;i<val;i++){
        if(s[i]=='?'){
            if(i & 1){
                temp1[i]=1;
            }
            else{
                temp1[i]=0;
            }
        }
        else if(s[i]=='1'){
            temp1[i]=1;
        }
        else{
            temp1[i]=0;
        }
    }

    for(ll i=0;i<val;i++){
        if(s[i]=='?'){
            if(i & 1){
                temp[i]=0;
            }
            else{
                temp[i]=1;
            }
        }
        else if(s[i]=='1'){
            temp[i]=1;
        }
        else{
            temp[i]=0;
        }
    }
    
    bool c=funtemp4(temp[0],temp1[0],1);
    // if(c){

    // }

    ll final1=min2(hisab(temp),hisab(temp1));
    cout<<final1<<endl;

  }

    
    

    
    return 0;
}
