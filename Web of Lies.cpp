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

	ll t=1;
    //cin>>t;
    
    
   
   for (int iii = 0; iii < t; ++iii)
   {    

       int a,b,count=0,res,l,k;
    cin>>a>>b;
    unordered_map<ll,ll> um;
    set<char> kk;
    map<int,set<int>> aa;
    unordered_map<ll,ll> nn;
    set<int> xx;
    if(a<0){
            continue;
        }
    for (int i = 1; i < a+1; ++i)
    {
        xx.insert(i);
    }

   

    for (int i = 0; i < b; ++i)
    {   double pp;
        int x,y;
        cin>>x>>y;

        aa[min(x,y)].insert(max(x,y));
        if(xx.find(min(x,y))!=xx.end()){
            ll temp;
            temp=min(x,y);
            xx.erase(temp);
            count--;
        }
    }
    double oo;
    cin>>res;

    while(res--){
        int q,w,e,f1,f2;

        cin>>q;

        if(q==2){
            cin>>w>>e;
            f1=min(w,e);
            f2=max(w,e);
            aa[min(w,e)].insert(max(w,e));
            aa[f1].erase(f2);
            if(aa[f1].size()==0){
                xx.insert(f1);
            }
        }

        else if(q==1){
            cin>>w>>e;
            f1=min(w,e);
            aa[min(w,e)].insert(max(w,e));
            if(xx.find(f1)!=xx.end()){
                xx.erase(min(w,e));
            }
        }
        

        // if(a<0)
        
        else{
            
            cout<<xx.size()<<endl;
        }
        
}
        
        
   }
	
    
    return 0;
}
