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


void Means(int sum, int N)
{
    
    double d = (double)sum / (double)N;
 
    
    
        cout <<d << " ";
}
 

 
 
 
 
int main(){
    
   
   ios_base::sync_with_stdio(false); cin.tie(NULL);

   
        ll t;
    
	read(t);
    while(t--){
        int a[maxn];
        map<int,int>mp;
        int n,k;scanf("%d%d",&n,&k);
        int mx = 0;
        for(int i = 1;i <= n;i++) {
            scanf("%d",&a[i]);
            mp[a[i]] = 1;
            mx = max(mx,a[i]);
        }
        int mex = 0;
        for(int i = 0;i <= n;i++) {
            if(!mp.count(i)) {
                mex = i;break;
            }
        }
        if(k == 0) {
            printf("%d\n",n);
            continue;
        }
        int num = (mex + mx) / 2;
        if((mex + mx) % 2 == 1) num++;
        int ans = n;
        if(mex > mx) {
            ans = n + k;
        } else {
            if(mp[num] == 0) ans++;
        }
        printf("%d\n",ans);
    }

    
    

    
    return 0;
}
