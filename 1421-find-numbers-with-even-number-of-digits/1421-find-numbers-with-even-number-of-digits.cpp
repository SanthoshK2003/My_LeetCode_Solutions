class Solution {
public:
    int findNumbers(vector<int>& nums) {
        if(nums.size()==0)
        {
            return 0;
        }
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            int numDig=0;
            while(nums[i]!=0)
            {
                nums[i]=nums[i]/10;
                numDig++;
            }
            if(numDig%2==0)
            {
                count++;
            }
        }
        return count;
    }
};