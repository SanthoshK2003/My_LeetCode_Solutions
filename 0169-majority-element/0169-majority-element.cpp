class Solution {
public:
    int majorityElement(vector<int>& nums) {
          int n=nums.size();
        sort(nums.begin(),nums.end());
        int majority=n/2;
        return nums[majority];
    }
};