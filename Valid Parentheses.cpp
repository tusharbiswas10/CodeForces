class Solution {
public:
    bool isValid(string s) {
        // O(N) time & space(extra)
        stack<char> inp;// take stack
        for(int i=0;i<s.size();i++){ //iterate through string
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
         { 
           inp.push(s[i]); // put into stack if it is only opening parenthesis 
           
         }
            else{ // if s[i] is not opening parenthesis 
                if(inp.empty()|| (inp.top()=='(' & s[i]!=')') || (inp.top()=='{' & s[i]!='}') || (inp.top()=='[' & s[i]!=']')){
                    return false; // return false if stack is empty or top of stack is not the oposite of s[i]
                }
                    
                    inp.pop();// if not false pop from stack top
            }
        }
        return inp.empty();
         
    }
};
