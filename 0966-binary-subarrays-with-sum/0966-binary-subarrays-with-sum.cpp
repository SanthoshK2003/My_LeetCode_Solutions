class Solution {
public:
    int atmost(vector<int>& nums, int goal)
    {
        int n=nums.size();
        if(goal<0)
        {
            return 0;
        }
        int left=0,right=0,count=0,sum=0;
        while(right<n)
        {
            sum+=nums[right];
            while(sum>goal)
            {
                sum-=nums[left];
                left++;
            }
            count=count+(right-left+1);
            right++;
        }

        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atmost(nums,goal) - atmost(nums,goal-1);
    }
};