#include <bits/stdc++.h>

using namespace std;

int main()
{

// https://shareablecode.com/snippets/buildings-with-an-ocean-view-c-solution-leetcode-SQKy-TTM9
   vector<int> v={4,2,3,1} ;
  // v.erase(v.begin() );
   
//   for(int i=0;i<v.size();i++){
//       if(v[i]<=v[i+1]){
//           v[i]=-1;
//       }
//       else{
//           v[i]=i;
//       }
//   }
//   for(int i=0;i<v.size();i++){
//       if(v[i]==-1){
//           v.erase(v.begin()+i ); 
//       }
//   }
//   for(int i=0;i<v.size();i++){
//       cout<<v[i];
//   }

    vector<int> result;
        for (int i = 0; i < v.size(); ++i) {
            while (!result.empty() && v[result.back()] <= v[i]) {
                result.pop_back();
            }
            result.push_back(i);
        }
        
        for(int i=0;i<result.size();i++){
            cout<<result[i];
        }
    return 0;
}
