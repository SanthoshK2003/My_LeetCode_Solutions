class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
         int deviation=0;
        for(int i=0;i<n;i++)
        {
           if(i<n-1 && nums[i]>nums[i+1])
           {
            deviation++;
           }
           else if(i==n-1 && nums[n-1]>nums[0])
           {
            deviation++;
           }
        }
        return (deviation>1)?false:true;
    }
};