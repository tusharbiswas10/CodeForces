class Solution {
public:
    vector<int> countBits(int n) {
        // dp solution, O(N) both time & space
        vector<int>state(n+1);
        state[0]=0;
        for(int i=1;i<n+1;i++){
            state[i]=state[i/2]+(i%2);
        }
        
        return state;
    }
};
