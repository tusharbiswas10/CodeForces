// better + optimized solution
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        // DP solution
        for(int i=1; i<triangle.size();i++){
            for(int j=0;j<triangle[i].size();j++){
                // for fillinig  left most side cells
                if(j==0){
                    triangle[i][j]+=triangle[i-1][j];
                }
                // for filling right most cells
                else if(j==triangle[i].size()-1){
                    triangle[i][j]+=triangle[i-1][j-1];
                }
                //for other cells
                else{
                    triangle[i][j]=min(triangle[i-1][j-1],triangle[i-1][j])+triangle[i][j];
                }
            }
        }
        // return the min element from last row
        return *min_element(triangle[triangle.size()-1].begin(),triangle[triangle.size()-1].end());
        
    }
};

// naive + recursion solution

class Solution {
public:
   int run(vector<vector<int>>& triangle, int h, int j) {
        
       if(h == triangle.size()) {
             return 0;
        }  
        
        return triangle[h][j]+min(run(triangle, h+1, j),run(triangle, h+1, j+1));
    }
    int minimumTotal(vector<vector<int>>& triangle) {
         
          return run(triangle, 0, 0);
    }
};
