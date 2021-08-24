#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

const ll x=1000000;

#define run ll run; cin>>run; for(ll a = 1 ; a <= run ; a ++ )
#define endl "\n"

#define f(i,l,r) for(ll i=l ; i<=r ; i++)

#define res cout<<"Case #"<<a<<": "

void calculation(vector<string>&v,string a, ll left, ll right)
{
    if (left == right)
    {
     v.pb(a);
    }
    else
    {
        for (int i = left; i <= right; i++)
        {
            swap(a[left], a[i]);
            calculation(v,a,left+1, right);
            swap(a[left], a[i]);
        }
    }
}
long double store[x+1];
long double q=0.5772156649;

int main()
{
    
     store[1]=1;

    f(i,2,x)
    {
        store[i]=store[i-1];
        store[i]+=(long double)((long double)1.0/(long double) i);
    }
    run {
        ll t; 
        cin >> t;
        res << " ";
        if(t<=x){
            cout << fixed << setprecision(8) << store[t];
        }

        else{
            long double s=(long double)((long double)1.0/(long double)(2*t));
            long double w=log(t);
            long double final1 = w +  q+s ;
            cout<< fixed << setprecision(8) << final1;
        }
        cout << endl;
    }
}
