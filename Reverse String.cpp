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

void solve(){
    ll n,m;
    cin>>n;
    cout<<(n+1)/10<<endl;

}




 
 
 
 
int main(){
    
   
   ios_base::sync_with_stdio(false); cin.tie(NULL);

   
  ll t;
  cin>>t;
  for (ll iii = 0; iii < t; ++iii)
  {
    ll count = 0;
    bool checker = 0;
    string str1,str2;
     cin>>str1>>str2;
    vector<ll>store;     
        
        
        for(int i = 0; i < str1.length(); i++){
            for(int j = 0; j < str2.length(); j++){
                if(str1[i] == str2[j]){
                    ll temp1, temp2;
                    ll count = 0;
                    for(temp1 = j; temp1 >=0; temp1--){
                        if(i - count < 0)
                        break;
                        if(str2[temp1]!=str1[i-count])
                        break;
                        count++;
                    }
                    count = 0;
                    for(temp2 = j; temp2 < str2.length(); temp2++){
                        if(i - count < 0){
                            break;
                        }
                        
                        if(str2[temp2] != str1[i-count]){
                            break;
                        }

                        // else{
                        //     continue;
                        // }
                        
                        count=count+1;
                    }
                    if(temp1 == -1 && temp2 == str2.length()){
                        checker = 1;
                    }

                    Means(str2.length(),str1.length());
                    //if
                    
                }
                if(checker == 1){
                    break;
                }
                else{
                    continue;
                }
                        
            }
            if(checker == 1){
                break;
            }

            else{
                    continue;
                }
        }
        if(! checker){
            cout<<"NO\n";
        } 

        else if(checker){
            cout<<"YES\n";
        }


  }

    
    

    
    return 0;
}
