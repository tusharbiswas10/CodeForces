    #include <bits/stdc++.h>
     
     
    #define ll          long long int
    #define mod         1000000007
    #define endl        "\n"
    #define pb          push_back
    #define max2(a,b)   ((a<b)?b:a)
    #define max3(a,b,c) max2(max2(a,b),c)
    #define min2(a,b)   ((a>b)?b:a)
    #define min3(a,b,c) min2(min2(a,b),c)
     
     
     
    using namespace std;
     
    void solve() {
     
         vector<ll> v;
        ll t,i,x,sum=0,count,out = 0;
        double res;
        cin >> t;
     
        for (i=0; i<t; i++){
            cin >> x;
            
            v.push_back(x);
     
     
        }
        sum = accumulate(v.begin(),v.end(),0);
        
        if(sum==t){
        	cout<<"0"<<endl;
        }
     
        else if(sum>t){
        	res=sum-t;
     
        	cout<<res<<endl;
        }
        
     
        else{
        	cout<<"1"<<endl;
        }
    }
     
    int main() {
      ll t;
        cin>>t;
     
        for (ll i = 0; i < t; ++i)
        {
        solve();
      }
      return 0;
    } 
