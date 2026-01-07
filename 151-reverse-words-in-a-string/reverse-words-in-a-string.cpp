class Solution {
public:
    string reverseWords(string s) {
        vector<string>words;
        string temp = "";

        int n = s.length();
        for(int i=0;i<n;i++){
            if(s[i] != ' '){
                temp += s[i];
            }else{
                if(!temp.empty()){
                    words.push_back(temp);
                    temp = "";
                }
            }
        }
        if(!temp.empty()){
            words.push_back(temp);
        }
        reverse(words.begin(),words.end());
        string result = words[0];
        for(int i=1;i<words.size();i++){
            result += " " + words[i];
        }
        return result;
    }
};