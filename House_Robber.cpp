class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        int maximum = 0;
        for(int i = nums.size()-1;i>=2;i--){
            maximum = max(nums[i],maximum);
            nums[i-2]+=maximum;
            
        }
        return max(nums[0],nums[1]);
    }
};