class Solution {
public:
    vector<string> output; // will return it at the end & it will contain result
    unordered_map<char, string> key; // here string for each button will be stored
     
      
    // dfs fuction
    void dfs(string digits, int index, string ans){
        /* stopper logic : if index becomes equal to digits size, bcz it means it is crossing 
        our given size*/
        // and now we will start to push out ans to output vector
        if(index==digits.size()){
            output.push_back(ans);
            // now return because we have reached max depth for one way
            return;
        }
        // self work
        char temp=digits[index];
        string store=key[temp];
        
        // recursive work
        /* we will select next button string for each char fron string of current button,
        like for "23" a->def, b->def, c->def*/
        
        for(int i=0;i<store.length();i++){
 //incrase idex by 1 so that it can move forward,and keep concatinating current char with ans
            dfs(digits, index+1, ans+store[i]);
        }
        
        
    }
    
    
    vector<string> letterCombinations(string digits) {
        // store necessary string for each button
        key['2'] = "abc";
        key['3'] = "def";
        key['4'] = "ghi";
        key['5'] = "jkl";
        key['6'] = "mno";
        key['7'] = "pqrs";
        key['8'] = "tuv";
        key['9'] = "wxyz";
        
        // corner case: if input digit is empty then return empty output vector
        if(digits.length()==0){
            return output;
        }
       
        
        // dfs fuction calling
 /* we will send input digit, 0 as index so that stoper logic works in dfs, empty string where chars from each number can be added */
        dfs(digits,0,"");
        
        return output;
    }
};
