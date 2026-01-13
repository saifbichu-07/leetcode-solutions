class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>result;
        int n = nums.size();
        k = k % n;
        for(int i=n-1;i>=n-k;i--){
            result.push_back(nums[i]);
        }
        int i=0;
        int j=result.size()-1;
        while(i<j){
            swap(result[i],result[j]);
            i++;
            j--;
        }
        for(int m=0;m<n-k;m++){
            result.push_back(nums[m]);
        }

        nums = result;


    }
};