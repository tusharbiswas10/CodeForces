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
 
 
using namespace std;
const long long l=998244353;
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
 
   
        ll n;
    cin>>n;
    ll ar[n+3];
    for(ll i=0;i<n;i++)cin>>ar[i];
    priority_queue<ll>q;
    ll count=0;
    ll total=0;
    for(ll i=0;i<n;i++)
    {
        total+=ar[i];
        count++;
        if(ar[i]<0)q.push(-ar[i]);
        while(total<0)
        {
            total=total+q.top();
            q.pop();
            count--;
        }
    }
    cout<<count<<endl;
	
    
 
    
    return 0;
}
