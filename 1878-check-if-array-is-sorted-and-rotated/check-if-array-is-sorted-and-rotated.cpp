class Solution {
public:
    bool isSorted(vector<int>& nums){
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                return false;
            }

        }
        return true;
    }
    bool check(vector<int>& nums) {
        int n = nums.size();
        for(int j=0;j<n;j++){
            if(isSorted(nums))return true;
            int first = nums[0];
            int i=0;
            while(i<n-1){
                nums[i] = nums[i+1];
                i++;
            }
            nums[n-1] = first;
        }
        return false;
    }
};