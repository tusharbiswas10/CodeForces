#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl        "\n"

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


bool validationChecker(char a)
{
   if(a=='A'||a=='I'||a=='O'||a=='U'||a=='E'){
    return true;
   }
   else{
    return false;
   }
   
}
int getResult()
{
   
      string inp;
      cin>>inp;
      ll result=INT_MAX;
      for(char store='A';store<='Z';store++)
      {
         ll count=0,pass=0;
         for(auto up:inp)
         {
            if(up==store) {
                continue;
            }
            else if(validationChecker(store)==validationChecker(up)){
                count=count+2;
                pass=pass+2;
            } 
            else{
                count++;
                pass--;
            } 
         }
         result=min(result,count);
      }
      

      return result;
   
}
int main()
{
   ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t;
   cin>>t;
   for (ll i = 0; i < t; ++i)
   {
       cout<<"Case #"<<i+1<<": "<<getResult()<<endl;
    
   }
    
    return 0;
}
