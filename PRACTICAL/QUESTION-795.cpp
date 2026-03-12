class Solution {
public:
    int count(vector<int>& nums, int limit){
        int ans = 0;
        int len = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] <= limit){
                len++;
            }
            else{
                len = 0;
            }
            ans += len;
        }
        return ans;
    }
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        return count(nums, right) - count(nums, left - 1);
    }
};
