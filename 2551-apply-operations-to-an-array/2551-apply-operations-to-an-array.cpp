class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n);
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                nums[i]=nums[i]*2;
                nums[i+1]=0;
            }
        }
        int index=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                res[index]=nums[i];
                index++;
            }
        }
        for(int i=index;i<n;i++)
        {
            res[i]=0;
        }
        return res;
    }
};