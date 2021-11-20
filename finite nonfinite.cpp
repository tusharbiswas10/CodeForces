    #include <bits/stdc++.h>
    using namespace std;
    int main() {
    	ios::sync_with_stdio(false);
    	cin.tie(nullptr);
    	cout.tie(nullptr);
    	int n;
    	cin >> n;
    	while (n--) {
    		long long p, q, b;
    		cin >> p >> q >> b;
    		long long g = gcd(p, q);
    		q /= g;
    		b = gcd(q, b);
    		while (b != 1) {
    			while (q % b == 0) q /= b;
    			b = gcd(q, b);
    		}
    		if (q == 1)
    			cout << "Finite\n";
    		else
    			cout << "Infinite\n";
    	}
    	return 0;
    }

//******************* aiub contest 2021 *****************************************


#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl        "\n"
#define cases(t)          int t;cin>>t;while(t--)


clock_t startestime;
double getCurrentestime() {
    return (double)(clock() - startestime) / CLOCKS_PER_SEC;
}

ll power(ll base,ll pow){
    ll final1=1;
    for (int i = 1; i <=pow; ++i)
    {
        final1=final1*base;
    }

    return final1;
}
bool Prime(ll x)
{
    
    if (x <= 1){
        return false;
    }
  
    
    for (ll i = 2; i < x; i++)
        if (x % i == 0){
            return false;
        }
  
    return true;
}
ll tes(ll q, ll base ){
   while (base != 1) {


                while (q % base == 0){
                   q=q/base; 
                } 
                base = __gcd(q, base);


            }
            return q;
}

ll modInverse(ll a, ll m)
{
    for (int x = 1; x < m; x++)
        if (((a%m) * (x%m)) % m == 1)
            return x;
}


 
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll test,w=INT_MAX;
    vector<char> v;
    cin>>test;
    string s;
    
    map<string,int> reg;
    for(ll iii=1;iii<=test;iii++)
    {    

       ll p, q, x,count=0;
            cin >>p>>q;
            x = __gcd(p, q);
            q =q/x;

            ll base=10;
            base = __gcd(q, base);
            while (base != 1) {


                while (q % base == 0){
                   q=q/base; 
                } 


               ll  temp = __gcd(q, base);
               base=temp;


            }
            
            if (q == 1){

                cout << "YES"<<endl;
            }
            else{
                cout << "NO"<<endl;
            }
         
        
    }
    return 0;
}

/* __/\\\///////\\\_____/\\\//////////__\/\\\\\\________/\\\\\\_       
  _\/\\\_____\/\\\____/\\\_____________\/\\\//\\\____/\\\//\\\_      
   _\/\\\\\\\\\\\/____\/\\\____/\\\\\\\_\/\\\\///\\\/\\\/_\/\\\_     
    _\/\\\//////\\\____\/\\\___\/////\\\_\/\\\__\///\\\/___\/\\\_    
     _\/\\\____\//\\\___\/\\\_______\/\\\_\/\\\____\///_____\/\\\_   
      _\/\\\_____\//\\\__\/\\\_______\/\\\_\/\\\_____________\/\\\_  
       _\/\\\______\//\\\_\//\\\\\\\\\\\\/__\/\\\_____________\/\\\_ 
        _\///________\///___\////////////____\///______________\///__*/
