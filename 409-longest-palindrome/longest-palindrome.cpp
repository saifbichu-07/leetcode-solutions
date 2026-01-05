class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.length();
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        int result = 0;
        bool oddFreq = false;
        for(auto it:mp){
            if(it.second % 2 == 0){
                result += it.second;
            }else{
                result += it.second-1;
                oddFreq = true;
            }
        }
        if(oddFreq){
            result++;
        }
        return result;
    }
};