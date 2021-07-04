    #include <iostream>
     
    using namespace std;
     
    int main()
    {
        
        int t;
        cin>>t;
         for(int i =0; i<t;i++){
        int n,count=0;
       cin>>n;
       
       int ar[n*2];
       
       for(int i =0; i<n*2;i++){
           cin>>ar[i];
       }
       
       for(int i =0; i<n*2;i++){
           if(ar[i]%2!=0){
               count++;
           }
       }
       
       if(count==n){
           cout<<"Yes";
       }
       
       if(count!=n){
           cout<<"No";
       }
       
       cout<<endl;
       
         }
       
       return 0;
    }
