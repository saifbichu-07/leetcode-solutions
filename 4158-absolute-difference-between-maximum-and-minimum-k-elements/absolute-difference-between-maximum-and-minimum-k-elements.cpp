class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        int n = nums.size();
        int smallest = 0;
        int largest = 0;
        
        sort(nums.begin(),nums.end());
        for(int i=0;i<k;i++){
            smallest = smallest + nums[i];
        }
         for(int i=n-k;i<n;i++){
            largest = largest + nums[i];
        }
    
        return abs(largest - smallest);
        
    }
};