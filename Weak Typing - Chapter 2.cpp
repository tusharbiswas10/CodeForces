#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl        "\n"
#define mod 1000000007

clock_t startTime;
double getCurrentTime() {
    return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

ll power(ll base,ll pow){
    ll final1=1;
    for (int i = 1; i <=pow; ++i)
    {
        final1=final1*base;
    }

    return final1;
}

ll modInverse(ll a, ll m)
{
    for (int x = 1; x < m; x++)
        if (((a%m) * (x%m)) % m == 1)
            return x;
}


int main()
{
    
    ll t;
    cin>>t;
  
    for(ll ii=1; ii<t+1; ii++)
    {   string store,finalStore;
        ll inp,inp2,a=-1,out=0,b=-1,temp=0,c,count=0,x;
        
        cin>>inp>>store;
        vector<char> nx;
        vector<ll>np(inp, 0);
        vector<ll>np2(inp, 0);
        
        
        
        for(ll i=0; i<inp; i++)
        {   
            if(store[i]=='O')
            {
                if(b>-1){
                    np[i]=(np[b]+b+1)% mod;
                    count++;
                }
                a=i;
            }

           else if(store[i]=='F')
            {
                c=max(a, b);
                if(c>-1){
                    temp=np[i];
                    np[i]=np[c];
                }
            }
            
            else
            {
                if(a>-1){
                    np[i]=(np[a]+a+1)% mod;
                    count--;
                }
                b=i;
                
            } 

            out=out+ np[i];
            x=x+temp;
            out=out%mod;
        }
        cout<<"Case #"<<ii<<":"<<" "<<out<<endl;
    }
    return 0;
}

