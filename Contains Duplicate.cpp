class Solution {
public:
    bool containsDuplicate(vector<int>& nums) { // first approach, works but slow, O(N) both space & time
        set<int> s(nums.begin(), nums.end());
        if(s.size()==nums.size()){
            return false;
        }
        else{
            return true;
        }
    }
};

// better solution

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      
      // O(N) time complexity but No extra space is needed
         sort(nums.begin(), nums.end());
        
            for(int i=0;i<nums.size()-1;i++){
                if(nums[i]==nums[i+1]){
                    return true;
                }
         
            }
        return false;
    }
};
