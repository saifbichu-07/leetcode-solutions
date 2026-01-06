class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt = 0;
        string result = "";
        for(int i=0;i<s.length();i++){
            if(s[i]== ')'){
                cnt--;
            }
            if(cnt != 0){
                result += s[i];
            }
            if(s[i] == '('){
                cnt++;
            }
            
        }
        return result;
    }
};