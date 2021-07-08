    #include <bits/stdc++.h>
     
    #define ll          long long int
    #define mod         1000000007
    #define endl        "\n"
    #define pb          push_back
    #define max2(a,b)   ((a<b)?b:a)
    #define max3(a,b,c) max2(max2(a,b),c)
    #define min2(a,b)   ((a>b)?b:a)
    #define min3(a,b,c) min2(min2(a,b),c)
     
    const int INF = 1000000009;
     
    using namespace std;
     
    ll gcd(ll x,ll y ){
        while(y){
            ll res=y;
            y=x%y;
            x=res;
        }
        return x;
    }
     
    ll lcm(int a, int b)
    {
        return (a / gcd(a, b)) * b;
    }
     
    int main(){
    	ios_base::sync_with_stdio(false); cin.tie(NULL);
    	ll n,k,t;
        cin>>t;
     
       vector<int> store;
       for (int iii = 0; iii < t; ++iii)
       {
         ll fst,snd,temp1=0,temp2,temp3,final;
     
          
        cin>>fst;
        
        for(ll i=0;i<fst;i++){
            
            cin>>snd;
            temp1=temp1+snd;
        }
     
        temp2=temp1%fst;
        temp3=fst-temp1%fst;
        final=temp2*temp3;
        cout<<final<<endl;
       }
     
       
     
    	
        
        return 0;
    }
