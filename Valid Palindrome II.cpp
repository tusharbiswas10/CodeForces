class Solution {
public:
    bool checker(string &s, int head, int tail){
        while(head<tail){
            if(s[head]!=s[tail]) return false;
            head++;
            tail--;
        }
        
        return true;
    }
    
    bool validPalindrome(string s) {
        int head=0, tail=s.length()-1;
        
        while(head<tail){
            if(s[head]!=s[tail]){
                return checker(s, head+1,tail) or checker(s,head,tail-1);
            }
            head++;
            tail--;
        }
        
        return true;
    }
};
