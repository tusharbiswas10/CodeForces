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
     
     
    bool fact(string & temp1, string & temp2, string & val, ll store,vector<ll> & x, vector<ll> & y){
        
        ll aa=27,a,count=0,su=1; 
        vector<vector<ll>> store2(aa);
        vector<vector<ll>>store3(aa);
     
        for(ll i=0;i<temp2.size();i++){
            ll q=y[i];
            store3[temp2[i]-'a'].pb(q);
     
            if(x[i]==1){
            continue;
        }
        }
     
     
        for(ll i=0;i<temp1.size();i++){
            ll q=x[i];
            store2[temp1[i]-'a'].pb(q);
     
            if(x[i]==1){
            continue;
        }
        }
        
     
        for(ll i=0;i<val.size();i++){
             a =val[i]-'a';
          bool vecChecker=0;
            if(store & su){
     
                auto xx = lower_bound(store2[a].begin(),store2[a].end(),count);
                if(xx!=store2[a].end()){
                    count=*xx;
                    vecChecker=false;
                }
                else{
                    vecChecker=true;
                    return false;
     
                }
                store=store^su;
            }
            else{
                bool vecChecker=0;
                auto xx = lower_bound(store3[a].begin(),store3[a].end(),count);
                if(xx!=store3[a].end()){
                    vecChecker=false;
                    count=*xx;
     
                    
     
                }
                else{
                    vecChecker=true;
                    return false;
                }
                store=store^su;
            }
     
        }
        return true;
    }
     
     
     
     
     
     
     
     
     
     
     
     
    int main(){
        
       
       ios_base::sync_with_stdio(false); cin.tie(NULL);
     
       
      ll t;
      cin>>t;
      for (ll iii = 0; iii < t; ++iii)
      { ll val=10,count=0;
        string str,t,aa,bb;
        vector<ll> qq;
        vector<ll>zz;
        cin>>str>>t;
     
        bool a=false;
        str=str+"{";
        t=t+"{";
        
        
        for(ll i=0;i<str.size();i++){
            if(i & 1){
                smallestDivisor(str.size());
                aa=aa+str[i];
                a=true;
                qq.pb(i);
            }
            else{
                bb=bb+str[i];
                a=false;
                zz.pb(i);
            }
        }
        int aa1=0,aa2=1;
        if(fact(aa,bb,t,aa1,qq,zz) || fact(aa,bb,t,aa2,qq,zz)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
      }
     
        
        
     
        
        return 0;
    }
