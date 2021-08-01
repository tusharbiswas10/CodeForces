 By Tushar_RGM, contest: Educational Codeforces Round 112 (Rated for Div. 2), problem: (A) PizzaForces, Skipped, #, Copy

    #include <bits/stdc++.h>
    using namespace std;
    #define F first
    #define S second
    #define PB push_back
    #define ll          long long int
    #define N 100500
     
    #define sz(x) int(x.size())
    #define endl '\n'
    #define pri(x) cout << x << endl
    #define all(x) x.begin(), x.end()
    #define FOR(v, f, to) for(int v = f; v < int(to); ++v)
    #define INF 2000000000
     
     
     
    void runner(){
      ios_base::sync_with_stdio(false);
       cin.tie(0);
    }
     
     
     
     
     
     
    int main(){
    	
      runner();
    	ll testCase ;
    	cin>>testCase;
    	FOR(iii, 0, testCase) {
       ll n;
            cin>>n;
            if(n<=6){
              cout<<15<<endl;
            } 
    else if(n>6) {
      cout<<((n+1)/2)*5<<endl;
    }
            
            
    	}
    	return 0;
    }
