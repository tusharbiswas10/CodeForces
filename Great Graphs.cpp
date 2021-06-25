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
     
     
     
     
     
     
    int main(){
        
       
       ios_base::sync_with_stdio(false); cin.tie(NULL);
     
       
            ll t;
        
    	cin>>t;
        while(t--){
            ll in,temp,count=0,result=0,total=0;
     
            cin>>in;
     
            ll arr[in];
     
        for(int i=0;i<in;i++){
            cin>>arr[i];
        }
        for(int i=0;i<in;i++){
            total=total+arr[i];
        }
     
     
        sort(arr,arr+in);
        
     
        for(int i=2;i<in;i++){
            count=count+arr[i-2];
                result=result-(arr[i]*(i-1));
            result=result+count;
        }
     
     
        cout<<result;
        cout<<endl;
     
          
        }
     
        
        
     
        
        return 0;
    }
